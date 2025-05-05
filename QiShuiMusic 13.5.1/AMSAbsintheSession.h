@interface AMSAbsintheSession : NSObject
@property (nonatomic) ^{PSCSessionInternal_=} sessionRef;
@property (nonatomic) NSString servKey;
@property (nonatomic) ^? PSCHelloV4Override;
- (id)init;
- (id)signData:bag:error:;
- (void).cxx_destruct;
- (id)servKey;
- (void)setServKey:;
- (BOOL)clearSession;
- (BOOL)verifyData:bag:error:;
- (BOOL)_prepareContextWithBag:error:;
- (id)PSCHelloV4Override;
- (void)setPSCHelloV4Override:;
- (id)sessionRef;
- (void)setSessionRef:;
+ (id)defaultSession;
@end
