@interface AWEFeedAnchorDouPlusLinkConfig : AWEFeedAnchorBaseConfig
@property (nonatomic) AWEAdLinkSponsorshipView douLinkButton;
- (void)updateWithAwemeModel:needPerformOnDisplay:;
- (id)anchorViewWithModel:;
- (id)layoutWithAwemeModel:commonLayoutInfo:;
- (id)douLinkButton;
- (void)setDouLinkButton:;
- (void).cxx_destruct;
+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:extraInfo:;
+ (id)anchorType;
@end
