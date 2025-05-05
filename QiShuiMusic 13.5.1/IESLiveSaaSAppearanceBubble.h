@interface IESLiveSaaSAppearanceBubble : BDDynamicMTLModel
@property (nonatomic) Q type;
@property (nonatomic) NSArray rollTipsArray;
@property (nonatomic) IESLiveSaaSImage icon;
@property (nonatomic) NSInteger rollAfterMs;
@property (nonatomic) q couponMateId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)iconJSONTransformer;
+ (id)rollTipsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
