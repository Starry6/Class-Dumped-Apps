@interface AWEFeedAnchorMusicBeatTemplateConfig : AWEFeedAnchorBaseConfig
@property (nonatomic) AWEMarkView musicBeatTemplateButton;
- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:needPerformOnDisplay:;
- (id)anchorViewWithModel:;
- (id)layoutWithAwemeModel:commonLayoutInfo:;
- (id)musicBeatTemplateButton;
- (void)setMusicBeatTemplateButton:;
- (void).cxx_destruct;
+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:extraInfo:;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:extraInfo:;
+ (id)p_extractNLESummaryFromExtra:;
+ (BOOL)p_featureBitsCheckWithExtra:;
+ (id)anchorType;
@end
