@interface BWStillImageConditionalRouterOverCaptureConfiguration : BWStillImageConditionalRouterConfiguration
@property (nonatomic) I narrowFieldOfViewOutputIndex;
@property (nonatomic) I wideFieldOfViewOutputIndex;
- (id)init;
- (unsigned int)narrowFieldOfViewOutputIndex;
- (unsigned int)wideFieldOfViewOutputIndex;
+ (id)overCaptureConfiguration;
@end
