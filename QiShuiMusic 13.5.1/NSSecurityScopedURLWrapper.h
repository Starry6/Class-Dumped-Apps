@interface NSSecurityScopedURLWrapper : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) BOOL readonly;
@property (nonatomic) BOOL backedByFileProvider;
@property (nonatomic) NSString providerIdentifier;
@property (nonatomic) NSString domainIdentifier;
@property (nonatomic) NSString itemIdentifier;
@property (nonatomic) NSData _scope;
- (id)itemIdentifier;
- (id)domainIdentifier;
- (id)providerIdentifier;
- (id)url;
- (void)dealloc;
- (id)initWithURL:;
- (id)initWithCoder:;
- (id)initWithURL:readonly:;
- (BOOL)isReadonly;
- (void)encodeWithCoder:;
- (id)description;
- (id)initWithProviderIdentifier:domainIdentifier:itemIdentifier:;
- (id)initWithURL:readonly:extensionClass:;
- (id)initWithURL:readonly:scope:;
- (id)_scope;
- (BOOL)isBackedByFileProvider;
+ (BOOL)supportsSecureCoding;
@end
