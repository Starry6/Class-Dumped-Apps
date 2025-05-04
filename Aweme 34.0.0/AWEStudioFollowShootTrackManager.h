@interface AWEStudioFollowShootTrackManager : NSObject
@property (nonatomic) q entranceType;
- (void)resetFollowShootEntranceType;
- (long long)entranceType;
- (void)setEntranceType:;
- (id)trackParamsForCollectEntranceShoot;
- (void)setFollowShootEntranceType:;
- (id)trackParamsForCollectEntrancePublish;
- (id)createAwemeParamsForCollectEntrancePublish;
- (id)init;
+ (id)sharedInstance;
@end
