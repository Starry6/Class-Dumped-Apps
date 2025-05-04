@interface AWEIMDisplayNameModel : MTLModel
@property (nonatomic) NSString en;
@property (nonatomic) NSString local;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentDisplayName;
- (id)en;
- (void)setEn:;
- (void)setLocal:;
- (void).cxx_destruct;
- (id)local;
- (id)initWithDict:;
- (id)copyWithZone:;
+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;
@end
