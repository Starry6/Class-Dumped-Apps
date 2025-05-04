@interface AWEScreenCastPlayInfo : MTLModel
@property (nonatomic) NSString definition;
@property (nonatomic) NSArray playAddresses;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)playAddresses;
- (void)setPlayAddresses:;
- (id)definition;
- (void).cxx_destruct;
- (void)setDefinition:;
+ (id)playAddressesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
