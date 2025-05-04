@interface AWEFeedAnchorCarConfig : AWEFeedAnchorBaseConfig
@property (nonatomic) AWEMarkView carButton;
- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:needPerformOnDisplay:;
- (id)anchorViewWithModel:;
- (id)layoutWithAwemeModel:commonLayoutInfo:;
- (void)updateAnchorIconImage:;
- (id)carButton;
- (void)setCarButton:;
- (void).cxx_destruct;
+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:extraInfo:;
+ (id)anchorType;
@end
