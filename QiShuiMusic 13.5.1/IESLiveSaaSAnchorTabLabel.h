@interface IESLiveSaaSAnchorTabLabel : BDDynamicMTLModel
@property (nonatomic) NSString content;
@property (nonatomic) IESLiveSaaSImage label;
@property (nonatomic) IESLiveSaaSImage icon;
@property (nonatomic) NSInteger style;
@property (nonatomic) NSInteger type;
@property (nonatomic) NSString key;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)iconJSONTransformer;
+ (id)labelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
