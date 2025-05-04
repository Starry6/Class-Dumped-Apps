@interface AWEFeedAnchorSoloKTVConfig : AWEFeedAnchorBaseConfig
@property (nonatomic) AWEMarkView soloKTVButton;
- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:needPerformOnDisplay:;
- (id)anchorViewWithModel:;
- (id)layoutWithAwemeModel:commonLayoutInfo:;
- (BOOL)shouldEnableBigfont;
- (id)soloKTVButton;
- (void)updateAnchorFontWithButton:;
- (void)setSoloKTVButton:;
- (void).cxx_destruct;
+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:extraInfo:;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:extraInfo:;
+ (id)anchorType;
@end
