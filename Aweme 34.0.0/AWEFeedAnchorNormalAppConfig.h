@interface AWEFeedAnchorNormalAppConfig : AWEFeedAnchorBaseConfig
@property (nonatomic) AWEMarkView appAnchorButton;
- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:needPerformOnDisplay:;
- (id)anchorViewWithModel:;
- (id)layoutWithAwemeModel:commonLayoutInfo:;
- (void)updateAnchorIconImage:;
- (id)appAnchorButton;
- (void)setAppAnchorButton:;
- (void).cxx_destruct;
+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:extraInfo:;
+ (id)anchorType;
@end
