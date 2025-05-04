@interface AWETeenFeedQuality : NSObject
@property (nonatomic) q launchType;
- (void)setLaunchType:;
- (long long)launchType;
+ (id)qualityFeedSubSceneFromVCType:;
+ (id)sharedInstance;
@end
