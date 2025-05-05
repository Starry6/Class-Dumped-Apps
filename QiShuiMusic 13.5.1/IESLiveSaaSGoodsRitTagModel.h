@interface IESLiveSaaSGoodsRitTagModel : BDDynamicMTLModel
@property (nonatomic) NSString tagID;
@property (nonatomic) IESLiveSaaSECIconGroupModel iconGroup;
@property (nonatomic) NSArray textContents;
@property (nonatomic) NSString labelName;
@property (nonatomic) NSString trackName;
@property (nonatomic) NSString urlString;
@property (nonatomic) IESLiveSaaSGoodsRitTagUIConfigModel uiConfig;
@property (nonatomic) NSArray subRitTags;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tagID;
- (void).cxx_destruct;
- (void)setTagID:;
+ (id)subRitTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
