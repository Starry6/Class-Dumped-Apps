@interface AWEExperienceTrackingManager : NSObject
@property (nonatomic) q indexOfRetrieve;
- (id)paramsForVideoPlayWithContext:;
- (id)paramsForPlayTimeWithContext:;
- (void)setIndexOfRetrieveWithNotification:;
- (void)setIndexOfRetrieve:;
- (long long)indexOfRetrieve;
- (void)addVVLevelToPlayApplogWithModel:params:;
- (id)init;
- (void)dealloc;
+ (id)videoPlayAspect;
+ (id)playTimeAspect;
+ (id)sharedInstance;
@end
