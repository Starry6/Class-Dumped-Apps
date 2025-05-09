@interface AWETimeManagementBubbleManager : NSObject
@property (nonatomic) NSString bubbleRecordMapKey;
@property (nonatomic) NSMutableDictionary bubbleRecordMap;
@property (nonatomic) BOOL cacheBubbleReachTimes;
@property (nonatomic) BOOL cacheBubbleClicked;
@property (nonatomic) MMKV mmkv;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)setMmkv:;
- (id)mmkv;
- (void)reloadBubbleRecord;
- (void)setBubbleRecordMapKey:;
- (id)bubbleRecordMapKey;
- (void)setBubbleRecordMap:;
- (void)setCacheBubbleReachTimes:;
- (void)setCacheBubbleClicked:;
- (BOOL)cacheBubbleReachTimes;
- (BOOL)cacheBubbleClicked;
- (id)bubbleRecordMap;
- (void)trackBubbleShow;
- (void)trackBubbleClick;
- (id)bubbleTitle;
- (BOOL)shouldShowBubble;
- (void)recordBubbleShowed;
- (void)recordBubbleClicked;
- (id)currentBubbleRecord;
- (void)clearCache;
- (id)init;
- (void)setup;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
