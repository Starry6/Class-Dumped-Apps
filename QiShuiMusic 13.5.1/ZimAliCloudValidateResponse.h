@interface ZimAliCloudValidateResponse : NSObject
@property (nonatomic) NSString ValidationRetCode;
@property (nonatomic) NSString ProductRetCode;
@property (nonatomic) NSString HasNext;
@property (nonatomic) NSString nextProtocol;
@property (nonatomic) NSString ExtParams;
@property (nonatomic) NSString RetCodeSub;
@property (nonatomic) NSString RetMessageSub;
- (id)ExtParams;
- (id)ProductRetCode;
- (id)RetCodeSub;
- (id)HasNext;
- (id)RetMessageSub;
- (id)ValidationRetCode;
- (id)nextProtocol;
- (void)setExtParams:;
- (void)setHasNext:;
- (void)setNextProtocol:;
- (void)setProductRetCode:;
- (void)setRetCodeSub:;
- (void)setRetMessageSub:;
- (void)setValidationRetCode:;
- (void).cxx_destruct;
@end
