@interface BWStillImageConditionalRouterDepthConfiguration : BWStillImageConditionalRouterConfiguration
@property (nonatomic) I yuvOutputIndex;
@property (nonatomic) I rawOutputIndex;
- (id)init;
- (unsigned int)yuvOutputIndex;
- (unsigned int)rawOutputIndex;
+ (id)depthConfiguration;
@end
