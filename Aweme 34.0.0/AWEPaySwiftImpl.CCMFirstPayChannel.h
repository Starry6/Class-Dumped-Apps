@interface AWEPaySwiftImpl.CCMFirstPayChannel : MTLModel
@property (nonatomic) NSString channelType;
@property (nonatomic) NSString defaultPayTypeDesc;
@property (nonatomic) NSString beforeLogoText;
@property (nonatomic) NSString logoUrl;
@property (nonatomic) NSString afterLogoText;
- (id)defaultPayTypeDesc;
- (void)setDefaultPayTypeDesc:;
- (id)beforeLogoText;
- (void)setBeforeLogoText:;
- (id)afterLogoText;
- (void)setAfterLogoText:;
- (id)channelType;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)setChannelType:;
- (id)logoUrl;
- (void)setLogoUrl:;
+ (id)JSONKeyPathsByPropertyKey;
@end
