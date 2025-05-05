@interface IESIMLinkMatchModel : MTLModel
@property (nonatomic) NSArray matchInfos;
@property (nonatomic) IESIMCaptionInfoModel captionInfo;
@property (nonatomic) IESIMCaptionAnchorModel captionAnchor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)captionAnchor;
- (id)matchInfos;
- (void)setCaptionAnchor:;
- (void)setMatchInfos:;
- (void).cxx_destruct;
- (id)captionInfo;
- (void)setCaptionInfo:;
+ (id)captionAnchorJSONTransformer;
+ (id)captionInfoJSONTransformer;
+ (id)matchInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
