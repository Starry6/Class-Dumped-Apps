@interface IESLiveSaaSMultiTabs : BDDynamicMTLModel
@property (nonatomic) NSString tabTitleColor;
@property (nonatomic) NSMutableArray tabsArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)tabsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
