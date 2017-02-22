/*
 * This file is part of velodyne driver.
 *
 * The driver is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * The driver is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with the driver.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <velodyne_decoder/velodyne_decoder_nodelet.h>

namespace velodyne_decoder {

void VelodyneDecoderNodelet::onInit() {
  decoder.reset(new VelodyneDecoder(
        getNodeHandle(), getPrivateNodeHandle()));
  if(!decoder->initialize()) {
    ROS_ERROR("Cannot initialize the velodyne decoder...");
    return;
  }
  return;
}

} // end namespace velodyne_decoder

PLUGINLIB_DECLARE_CLASS(velodyne_decoder, VelodyneNodelet,
    velodyne_decoder::VelodyneDecoderNodelet, nodelet::Nodelet);
