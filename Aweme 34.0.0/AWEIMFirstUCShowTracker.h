@interface AWEIMFirstUCShowTracker : NSObject
@property (nonatomic) BOOL hasTrackedBefore;
@property (nonatomic) HMDThreadSafeDictionary trackInfo;
@property (nonatomic) BOOL isFilterReport;
@property (nonatomic) NSString currentUserID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)setCurrentUserID:;
- (BOOL)isFilterReport;
- (BOOL)hasTrackedBefore;
- (BOOL)isEnableToTrack;
- (void)setIsFilterReport:;
- (void)reportUCTrackInfo;
- (void)setHasTrackedBefore:;
- (void)configUCTrackInfoWithName:data:;
- (void)configUCTrackInfoWithName:timeStamp:;
- (void)configUCTrackInfoWithDict:;
- (id)firstShowUnreadCountStorageKey;
- (id)init;
- (void).cxx_destruct;
- (void)setTrackInfo:;
- (id)trackInfo;
- (id)currentUserID;
+ (id)trackInfoNames;
+ (id)sharedInstance;
@end
