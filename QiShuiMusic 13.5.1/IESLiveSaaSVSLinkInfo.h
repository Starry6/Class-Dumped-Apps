@interface IESLiveSaaSVSLinkInfo : BDDynamicMTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString tabTitle;
@property (nonatomic) NSArray roomsArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)roomsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
