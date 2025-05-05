@interface ADDepthScaler : NSObject
@property (nonatomic) float interpThreshold;
@property (nonatomic) float noDepthOutputValue;
- (long long)scaleDepthBuffer:withCropRect:toBuffer:;
- (long long)scaleDepthBuffer:withZoomFactor:toBuffer:;
- (float)interpThreshold;
- (float)noDepthOutputValue;
+ (id)scalerWithInterpThreshold:andNoDepthOutputValue:;
+ (id)defaultScaler;
@end
