@interface AWEBatMan : NSObject
@property (nonatomic) Q enterType;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL hasCustomUI;
@property (nonatomic) <XPLayQualityStats><NSCopying> playStats;
@property (nonatomic) AWEBatManCustomTransition transition;
@property (nonatomic) Q originOrientation;
@property (nonatomic) q countTimes;
@property (nonatomic) AWEBatManEventTracker tracker;
@property (nonatomic) BOOL isFirstTapBatManView;
@property (nonatomic) <XPlayItemProtocol> playItem;
@property (nonatomic) Q status;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWEBatManLoadStatusDelegate> delegate;
@property (nonatomic) AWEAwemeModel model;
- (void)playItem:preloadDidFailed:;
- (void)playItem:preloadDidSucceed:;
- (void)playItem:playStatusDidUpdated:info:;
- (void)playItem:playQualityStats:;
- (void)playItem:playTimeCountDown:;
- (void)playItemViewTouchBegan:;
- (void)stopPlay;
- (id)playItem;
- (void)setOriginOrientation:;
- (unsigned long long)originOrientation;
- (void)setPlayItem:;
- (void)preloadWithXToken:withFrame:;
- (void)preloadWithBatManID:withFrame:;
- (void)setupItemViewWithModel:;
- (void)beginPlayinViewController:withCustomUIBlock:;
- (void)closePlayController;
- (void)preloadWithBatManID:handler:;
- (void)setCountTimes:;
- (void)setIsFirstTapBatManView:;
- (BOOL)isFirstTimePlayForBatManID:;
- (int)batManOrientation;
- (void)setHasCustomUI:;
- (void)setFirstTimePlayForBatManID:;
- (void)setPlayStats:;
- (id)playStats;
- (long long)countTimes;
- (BOOL)isFirstTapBatManView;
- (id)batManCustomTransition;
- (BOOL)hasCustomUI;
- (void)setModel:;
- (id)transition;
- (void)setTransition:;
- (id)init;
- (BOOL)isPlaying;
- (id)delegate;
- (void)setStatus:;
- (id)tracker;
- (id)model;
- (void)setTracker:;
- (void)presentViewController:;
- (void).cxx_destruct;
- (unsigned long long)status;
- (void)reset;
- (void)setDelegate:;
- (void)setIsPlaying:;
- (unsigned long long)enterType;
- (void)setEnterType:;
+ (void)hookShouldAutorotateWithViewController:;
@end
