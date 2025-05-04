@interface AWELinkMatchModel : MTLModel
@property (nonatomic) NSArray matchInfos;
@property (nonatomic) AWECaptionInfoModel captionInfo;
@property (nonatomic) AWECaptionAnchorModel captionAnchor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)matchInfos;
- (void)setMatchInfos:;
- (id)captionAnchor;
- (void)setCaptionAnchor:;
- (BOOL)shouldDisplayMatchInfo;
- (BOOL)shouldDisplayCaptionInfo;
- (void)displayCaption;
- (void).cxx_destruct;
- (void)setCaptionInfo:;
- (id)captionInfo;
+ (id)matchInfosJSONTransformer;
+ (id)captionInfoJSONTransformer;
+ (id)captionAnchorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
