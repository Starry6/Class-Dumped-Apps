@interface AWEFeedAnchorStarAtlasLinkConfig : AWEFeedAnchorBaseConfig
@property (nonatomic) AWEAdLinkSponsorshipView linkAdButton;
- (void)updateWithAwemeModel:needPerformOnDisplay:;
- (id)anchorViewWithModel:;
- (id)layoutWithAwemeModel:commonLayoutInfo:;
- (id)linkAdButton;
- (void)setLinkAdButton:;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)reset;
+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:extraInfo:;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:extraInfo:;
+ (id)anchorType;
@end
