@interface AWEPlayVideoTrackerManager : NSObject
@property (nonatomic) NSMutableArray trackerIMPs;
@property (nonatomic) AWEPlayVideoDefaultTracker defaultTracker;
- (void)setupTrackIMPs;
- (id)defaultTracker;
- (id)trackerIMPs;
- (unsigned long long)trackPlatformForType:;
- (void)setTrackerIMPs:;
- (void)setDefaultTracker:;
- (id)track:inPlayer:extraParams:passthroughParams:;
- (id)trackVideoPlayFinishInPlayer:extraParams:passthroughParams:customTrackKey:;
- (id)track:inPlayer:extraParams:passthroughParams:customTrackKey:;
- (void)reportDuplicate:forKey:tracker:defaultParams:trackerParams:currentParams:trackParamDict:;
- (id)mapTrackParams:withType:inPlayer:;
- (id)trackVideoPlayInPlayer:extraParams:passthroughParams:;
- (id)trackVideoPlayTimeInPlayer:extraParams:passthroughParams:;
- (id)trackVideoPlayFinishInPlayer:extraParams:passthroughParams:;
- (id)trackForVideoPlayPauseInPlayer:extraParams:passthroughParams:;
- (id)trackVideoPlayForSubClassInPlayer:extraParams:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
