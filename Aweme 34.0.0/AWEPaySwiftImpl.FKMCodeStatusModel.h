@interface AWEPaySwiftImpl.FKMCodeStatusModel : MTLModel
@property (nonatomic) NSString validStatusRaw;
@property (nonatomic) NSString codeValue;
@property (nonatomic) NSString industryCode;
@property (nonatomic) NSString statusRaw;
@property (nonatomic) NSString prePayInfo;
@property (nonatomic) NSString resultPage;
@property (nonatomic) NSString eventTypeRaw;
- (id)validStatusRaw;
- (void)setValidStatusRaw:;
- (id)codeValue;
- (void)setCodeValue:;
- (id)prePayInfo;
- (void)setPrePayInfo:;
- (id)resultPage;
- (void)setResultPage:;
- (id)eventTypeRaw;
- (void)setEventTypeRaw:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)industryCode;
- (void)setIndustryCode:;
- (void)setStatusRaw:;
- (id)statusRaw;
+ (id)JSONKeyPathsByPropertyKey;
@end
