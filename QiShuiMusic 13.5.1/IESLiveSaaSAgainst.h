@interface IESLiveSaaSAgainst : BDDynamicMTLModel
@property (nonatomic) NSString leftName;
@property (nonatomic) IESLiveSaaSImage leftLogo;
@property (nonatomic) BOOL hasLeftLogo;
@property (nonatomic) NSString leftGoal;
@property (nonatomic) NSString rightName;
@property (nonatomic) IESLiveSaaSImage rightLogo;
@property (nonatomic) BOOL hasRightLogo;
@property (nonatomic) NSString rightGoal;
@property (nonatomic) q version;
@property (nonatomic) double timeStamp;
@property (nonatomic) double diff;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasLeftLogo;
- (BOOL)hasRightLogo;
+ (id)leftLogoJSONTransformer;
+ (id)rightLogoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
