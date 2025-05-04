@interface AWEFriendsPushManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)motionItemConfig;
- (BOOL)enableShake;
- (void)didReceiveShakeEvent:error:from:;
- (double)shakeTimeInterval;
- (long long)motionLevel;
- (void)showPush:;
- (void)showRadarViewWithExtraParams:;
- (BOOL)isInActivity;
- (BOOL)isInShakeAD;
- (BOOL)isInNearby;
- (double)radarShakeThreshold;
- (long long)radarShakeMatchCount;
- (double)radarShakeTimeInterval;
- (id)init;
- (void)dealloc;
+ (id)sharedInstance;
@end
