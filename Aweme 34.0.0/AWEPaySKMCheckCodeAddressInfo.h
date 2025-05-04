@interface AWEPaySKMCheckCodeAddressInfo : JSONModel
@property (nonatomic) NSString addressType;
@property (nonatomic) NSString codeAddress;
@property (nonatomic) NSString codeBizType;
@property (nonatomic) NSString tips;
@property (nonatomic) AWEPaySKMAmountInfo amount;
- (id)codeAddress;
- (void)setCodeAddress:;
- (id)codeBizType;
- (void)setCodeBizType:;
- (id)tips;
- (void).cxx_destruct;
- (void)setTips:;
- (id)amount;
- (void)setAmount:;
- (void)setAddressType:;
- (id)addressType;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
