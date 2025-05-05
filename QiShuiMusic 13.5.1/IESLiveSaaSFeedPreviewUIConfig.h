@interface IESLiveSaaSFeedPreviewUIConfig : MTLModel
@property (nonatomic) IESLiveSaaSFeedPreviewDouyinLabelUIConfig douyinLabel;
@property (nonatomic) IESLiveSaaSFeedPreviewRoomGuideUIConfig roomGuide;
@property (nonatomic) IESLiveSaaSFeedPreviewLiveEndUIConfig liveEnd;
@property (nonatomic) IESLiveSaaSFeedPreviewAnchorDetailUIConfig anchorDetail;
@property (nonatomic) double leftMargin;
@property (nonatomic) double liveLabelIsMediumWeight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)liveEnd;
- (id)initWithDefault;
- (id)anchorDetail;
- (id)douyinLabel;
- (double)liveLabelIsMediumWeight;
- (id)roomGuide;
- (double)leftMargin;
- (void).cxx_destruct;
+ (id)anchorDetailJSONTransformer;
+ (id)douyinLabelJSONTransformer;
+ (id)liveEndJSONTransformer;
+ (id)roomGuideJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
