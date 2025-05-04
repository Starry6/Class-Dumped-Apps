@interface AWEFeedAnchorGreenScreenConfig : AWEFeedAnchorBaseConfig
@property (nonatomic) AWEMarkView greenScreenButton;
- (void)updateWithAwemeModel:needPerformOnDisplay:;
- (id)anchorViewWithModel:;
- (id)layoutWithAwemeModel:commonLayoutInfo:;
- (id)greenScreenButton;
- (void)updateButtonMarkText:;
- (void)setGreenScreenButton:;
- (void).cxx_destruct;
+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:extraInfo:;
+ (id)anchorType;
@end
