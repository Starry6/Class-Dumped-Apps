@interface IESECSKUCarAdaptModel : MTLModel
@property (nonatomic) BOOL isAdapted;
@property (nonatomic) IESECURLModel icon;
@property (nonatomic) NSString carDescption;
@property (nonatomic) NSString jumpURL;
@property (nonatomic) NSString adaptDescption;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)jumpURL;
- (id)adaptDescption;
- (id)carDescption;
- (BOOL)isAdapted;
- (void)setAdaptDescption:;
- (void)setCarDescption:;
- (void)setIsAdapted:;
- (void)setJumpURL:;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
