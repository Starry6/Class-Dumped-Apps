@interface AWEListenFeedManager : NSObject
@property (nonatomic) NSString currentItemID;
@property (nonatomic) double currentSpeed;
@property (nonatomic) BOOL isQuitFromListenFeed;
@property (nonatomic) q playTimes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)playTimes;
- (void)setPlayTimes:;
- (void)setCurrentItemID:;
- (id)currentItemID;
- (BOOL)listenFeedNewPageEnableOptimizeUIBigFont;
- (unsigned long long)listenFeedFontCurrentFontMode;
- (BOOL)enableReversePlay;
- (BOOL)enableReversePlayStyleWithReferString:;
- (BOOL)listenFeedNewPageEnableOptimizeUI;
- (double)listenFeedBackgroundFilterViewHeight;
- (BOOL)isQuitFromListenFeed;
- (void)setIsQuitFromListenFeed:;
- (BOOL)enablePlaylistManage;
- (void).cxx_destruct;
- (double)currentSpeed;
- (void)setCurrentSpeed:;
+ (BOOL)shouldAdaptLargeFontV2;
+ (id)sharedInstance;
@end
