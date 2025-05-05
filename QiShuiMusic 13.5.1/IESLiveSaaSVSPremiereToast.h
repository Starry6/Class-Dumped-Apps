@interface IESLiveSaaSVSPremiereToast : BDDynamicMTLModel
@property (nonatomic) NSString leftTopToast;
@property (nonatomic) NSString playerToast;
@property (nonatomic) NSString playerTopToast;
@property (nonatomic) IESLiveSaaSImage icon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
