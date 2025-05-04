@interface AWEFeedAnchorOpenPlatformConfig : AWEFeedAnchorBaseConfig
@property (nonatomic) AWEMarkView openPlatformButton;
@property (nonatomic) BOOL twoLineHasAnimated;
@property (nonatomic) @? twoLineHandler;
@property (nonatomic) BOOL didUpdateForLargeFontAdapt;
- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:needPerformOnDisplay:;
- (id)anchorViewWithModel:;
- (id)layoutWithAwemeModel:commonLayoutInfo:;
- (void)updateAnchorForLargeFontAdaptIfNeeded;
- (void)updateTwoLineUIForLargeFontAdaptIfNeededWithDuration:subTitle:;
- (BOOL)didUpdateForLargeFontAdapt;
- (void)setDidUpdateForLargeFontAdapt:;
- (BOOL)twoLineHasAnimated;
- (void)setTwoLineHasAnimated:;
- (BOOL)enableTwoLineStyle;
- (id)openPlatformButton;
- (void)resetTwoLineStyle;
- (void)addTwoLineStyleIfNeeded;
- (id)twoLineHandler;
- (void)setTwoLineHandler:;
- (void)setOpenPlatformButton:;
- (BOOL)isJianYingAnchor;
- (void).cxx_destruct;
- (void)reset;
+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:extraInfo:;
+ (id)anchorType;
@end
