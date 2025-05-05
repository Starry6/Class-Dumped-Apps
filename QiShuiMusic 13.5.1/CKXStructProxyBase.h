@interface CKXStructProxyBase : CKXProxyBase
@property (nonatomic) {?=QQQ} structInstance;
@property (nonatomic) CKXStructProxyChildCache childProxyCache;
- (void).cxx_destruct;
- (void)reset;
- (id)_init;
- (void)associateWithStructInstance:;
- (void)copyBytes:length:isNull:forToken:;
- (id)dataForToken:;
- (id)stringForToken:;
- (id)structInstance;
- (id)childProxyCache;
@end
