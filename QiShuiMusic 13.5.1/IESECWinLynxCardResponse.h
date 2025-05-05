@interface IESECWinLynxCardResponse : MTLModel
@property (nonatomic) NSString lynxData;
@property (nonatomic) IESECWinLynxCardConfig lynxConfig;
@property (nonatomic) IESECWinLynxSSR lynxSsr;
@property (nonatomic) BOOL invalid;
@property (nonatomic) Q lynxCardType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lynxSsr;
- (unsigned long long)lynxCardType;
- (id)lynxConfig;
- (id)lynxData;
- (void)setLynxCardType:;
- (void)setLynxConfig:;
- (void)setLynxData:;
- (void)setLynxSsr:;
- (void)setInvalid:;
- (BOOL)invalid;
- (void).cxx_destruct;
+ (id)lynxConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
