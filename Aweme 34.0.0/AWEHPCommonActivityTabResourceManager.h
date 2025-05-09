@interface AWEHPCommonActivityTabResourceManager : NSObject
@property (nonatomic) NSString activityID;
@property (nonatomic) AWEHomepageTimer timer;
@property (nonatomic) MMKV mmkv;
@property (nonatomic) NSMutableDictionary consumedDict;
@property (nonatomic) NSString defaultTitle;
@property (nonatomic) AWEFeedActivityTopBarItemConfig topBarItemConfig;
@property (nonatomic) NSArray badgeArray;
@property (nonatomic) NSArray bubbleArray;
@property (nonatomic) AWEFeedActivityTopBarItemImageModel currentTopBarItem;
@property (nonatomic) AWEFeedActivityBadgeModel currentBadge;
@property (nonatomic) AWEFeedActivityBubbleModel currentBubble;
@property (nonatomic) <AWEHPCommonActivityTabResourceManagerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMmkv:;
- (id)mmkv;
- (id)topBarItemConfig;
- (id)badgeArray;
- (id)bubbleArray;
- (void)setTopBarItemConfig:;
- (void)setBadgeArray:;
- (void)setBubbleArray:;
- (void)onFireWithTimer:;
- (void)consumeCurrentBadge;
- (id)currentTopBarItem;
- (id)currentBadge;
- (id)currentBubble;
- (void)consumeCurrentBubble;
- (id)initWithActivityID:topBarItemConfig:badgeArray:bubbleArray:delegate:;
- (void)startCheckStatus;
- (id)mmkvConsumedDict;
- (void)setupTopBarItemConfig:;
- (void)setupBadge:;
- (void)setupBubble:;
- (void)checkTopBarItemImagesWithServerTime:;
- (void)checkBadgeWithServerTime:;
- (void)checkBubbleWithServerTime:;
- (void)setCurrentTopBarItem:;
- (id)consumedDict;
- (void)setCurrentBadge:;
- (void)setCurrentBubble:;
- (void)checkStatusIfNeed;
- (void)setConsumedDict:;
- (void)setTimer:;
- (id)timer;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)activityID;
- (void)setActivityID:;
- (id)defaultTitle;
- (void)setDefaultTitle:;
@end
