@interface AWEPlayVideoBaseTracker : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackEvent:params:;
- (id)paramsForVideoPlayInPlayer:paramsModel:;
- (id)paramsForVideoPlayTimeInPlayer:paramsModel:;
- (id)paramsForVideoPlayPauseInPlayer:paramsModel:;
- (id)paramsForVideoPlayFinishInPlayer:paramsModel:;
- (id)paramsForTrackerIn:type:paramsModel:;
- (void)didTrackForTrackerInPlayer:type:paramsModel:trackParams:;
+ (id)trackKeyForType:;
@end
