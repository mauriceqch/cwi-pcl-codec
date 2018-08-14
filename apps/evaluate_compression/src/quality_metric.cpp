/*
 * Software License Agreement (BSD License)
 *
 *  Point Cloud Library (PCL) - www.pointclouds.org
 *  Copyright (c) 2009-2012, Willow Garage, Inc.
 *  Copyright (c) 2014 - Centrum Wiskunde Informatica
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   * Neither the name of its copyright holder(s)  nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 *
 */
//#include <quality_metric.h>
#include <quality_metric_impl.hpp>

template PCL_EXPORTS void
computeQualityMetric(boost::shared_ptr<pcl::PointCloud<pcl::PointXYZRGB> >, boost::shared_ptr<pcl::PointCloud<pcl::PointXYZRGB> >, QualityMetric*);
//template PCL_EXPORTS void
//computeQualityMetric(boost::shared_ptr<pcl::PointCloud<pcl::PointXYZRGBA> >, boost::shared_ptr<pcl::PointCloud<pcl::PointXYZRGBA> >, QualityMetric*);
template PCL_EXPORTS void
fitPointCloudInBox(boost::shared_ptr<pcl::PointCloud<pcl::PointXYZRGB> > pc, Eigen::Matrix4f* rtm, pcl::PointXYZRGB* min_box, pcl::PointXYZRGB* max_box, bool Procrustes);
template PCL_EXPORTS void
fitPointCloudInBox(boost::shared_ptr<pcl::PointCloud<pcl::PointXYZRGBA> > pc, Eigen::Matrix4f* rtm, pcl::PointXYZRGBA* min_box, pcl::PointXYZRGBA* max_box, bool Procrustes);
