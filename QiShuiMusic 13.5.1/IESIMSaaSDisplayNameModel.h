@interface IESIMSaaSDisplayNameModel : MTLModel
@property (nonatomic) NSString en;
@property (nonatomic) NSString local;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentDisplayName;
- (id)en;
- (void)setEn:;
- (id)local;
- (id)initWithDict:;
- (void).cxx_destruct;
- (void)setLocal:;
+ (id)JSONKeyPathsByPropertyKey;
@end
