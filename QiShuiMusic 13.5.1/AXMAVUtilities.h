@interface AXMAVUtilities : NSObject
+ (id)videoDeviceFromConnection:;
+ (BOOL)isMirroredVideoDevice:;
+ (id)videoDimensionsForDeviceFormat:;
@end
