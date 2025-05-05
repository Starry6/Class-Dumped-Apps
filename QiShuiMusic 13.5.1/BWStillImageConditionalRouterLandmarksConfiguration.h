@interface BWStillImageConditionalRouterLandmarksConfiguration : BWStillImageConditionalRouterConfiguration
@property (nonatomic) I defaultOutputIndex;
@property (nonatomic) I landmarksOutputIndex;
- (id)init;
- (unsigned int)defaultOutputIndex;
- (unsigned int)landmarksOutputIndex;
+ (id)landmarksConfiguration;
@end
