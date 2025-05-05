@interface CJPayMerchantInfo : JSONModel
@property (nonatomic) NSString merchantId;
@property (nonatomic) NSString merchantName;
@property (nonatomic) NSString merchantShortName;
@property (nonatomic) NSString merchantShortToCustomer;
@property (nonatomic) NSString appId;
@property (nonatomic) NSString intergratedMerchantId;
@property (nonatomic) NSString jhAppId;
- (id)jhAppId;
- (id)intergratedMerchantId;
- (id)merchantShortName;
- (id)merchantShortToCustomer;
- (void)setIntergratedMerchantId:;
- (void)setJhAppId:;
- (void)setMerchantShortName:;
- (void)setMerchantShortToCustomer:;
- (id)appId;
- (void)setAppId:;
- (void).cxx_destruct;
- (id)merchantId;
- (void)setMerchantId:;
- (id)merchantName;
- (void)setMerchantName:;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
