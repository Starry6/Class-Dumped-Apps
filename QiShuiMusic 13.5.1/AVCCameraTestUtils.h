@interface AVCCameraTestUtils : NSObject
+ (BOOL)expectedPreviewResolutionForDevice:width:height:;
+ (BOOL)findExpectedFramerate:forDevice:;
+ (BOOL)expectedGFTResolutionForDevice:ratio:;
@end
