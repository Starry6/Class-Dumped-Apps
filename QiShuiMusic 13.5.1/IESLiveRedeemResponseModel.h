@interface IESLiveRedeemResponseModel : IESLiveDynamicMTLModel
@property (nonatomic) NSArray redeemModels;
@property (nonatomic) IESLiveRedeemResponseModelExtra extra;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (id)extra;
- (void).cxx_destruct;
+ (id)redeemModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
