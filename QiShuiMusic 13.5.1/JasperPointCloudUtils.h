@interface JasperPointCloudUtils : NSObject
+ (int)calculateJasperPointsPositionInImage:outputJasperPointArray:confidenceLogicOption:;
+ (void)croppedAndScaleJasperPoints:inputJasperPointArraySize:cropX:cropY:scaleX:scaleY:outputVector:;
+ (int)dropIllegalJasperPoints:depthMaxLimitation:depthMinLimitation:imageMaxWidth:imageMaxHeight:outputJasperPointsFloatArray:outputNumberOfUniquiePoints:;
@end
