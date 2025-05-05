@interface MFAttachmentSecurityScope : NSObject
- (void)dealloc;
- (id)data;
- (void).cxx_destruct;
- (BOOL)isReadable;
- (id)initWithSecurityScopedURL:withToken:;
- (id)startWriteAccess;
- (id)startReadAccess;
- (id)_temporaryReadURL:error:;
- (void)_removeTemporaryReadURL;
- (void)stopAccess;
- (id)securityScopeToken;
- (void)_attachSecurityScope;
- (BOOL)isBundle;
+ (id)securityScopedURL:;
+ (id)securityScopedURL:withToken:;
@end
