@interface ZimValidateResponse : NSObject
@property (nonatomic) NSInteger validationRetCode;
@property (nonatomic) NSInteger productRetCode;
@property (nonatomic) BOOL pb_hasNext;
@property (nonatomic) NSString nextProtocol;
@property (nonatomic) NSDictionary extParams;
@property (nonatomic) NSString retCodeSub;
@property (nonatomic) NSString retMessageSub;
- (id)extParams;
- (id)nextProtocol;
- (BOOL)pb_hasNext;
- (int)productRetCode;
- (id)retCodeSub;
- (id)retMessageSub;
- (void)setExtParams:;
- (void)setNextProtocol:;
- (void)setPb_hasNext:;
- (void)setProductRetCode:;
- (void)setRetCodeSub:;
- (void)setRetMessageSub:;
- (void)setValidationRetCode:;
- (int)validationRetCode;
- (void).cxx_destruct;
+ (Class)extParamsElementClass;
@end
