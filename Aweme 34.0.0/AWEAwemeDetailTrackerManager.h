@interface AWEAwemeDetailTrackerManager : NSObject
@property (nonatomic) NSMutableArray trackerIMPs;
@property (nonatomic) AWEAwemeDetailDefaultTracker defaultTracker;
@property (nonatomic) NSMutableDictionary attachInfoDic;
- (void)attachDetailTableVC:extraParams:;
- (id)trackEnterDetailInDetailTableVC:extraParams:;
- (void)cancelAttachDetailTableVC:;
- (id)trackStayTimeInDetailTableVC:extraParams:;
- (void)setupTrackIMPs;
- (BOOL)shouldEnableNewDetailTrack;
- (id)eventWhiteListForTransmissionNode;
- (id)attachInfoDic;
- (id)track:inDetailTableVC:extraParams:;
- (id)defaultTracker;
- (id)trackerIMPs;
- (void)reportDuplicate:forKey:tracker:trackerParams:currentParams:;
- (id)trackEnterPersonalDetailInDetailTableVC:extraParams:;
- (unsigned long long)trackPlatformForType:;
- (void)setTrackerIMPs:;
- (void)setDefaultTracker:;
- (void)setAttachInfoDic:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
