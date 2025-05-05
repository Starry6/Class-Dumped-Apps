@interface IESLiveSaaSGradeIconModel : BDDynamicMTLModel
@property (nonatomic) NSString levelStr;
@property (nonatomic) NSNumber iconDiamond;
@property (nonatomic) IESLiveSaaSImage icon;
@property (nonatomic) NSNumber level;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
