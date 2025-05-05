@interface PBSecurityScopedURLWrapper : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) BOOL readonly;
@property (nonatomic) BOOL backedByFileProvider;
@property (nonatomic) FPItem fpItem;
- (id)url;
- (id)initWithURL:;
- (id)initWithCoder:;
- (id)initWithURL:readonly:;
- (BOOL)isReadonly;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithURL:readonly:extensionClass:;
- (BOOL)isBackedByFileProvider;
- (id)nsURLWrapper;
- (id)initWithFPItem:;
- (id)initWithURLWithoutIssuingExtension:;
- (id)initWithURL:issueExtension:readonly:extensionClass:;
- (id)initWithNSURLWrapper:;
- (id)fpItem;
+ (BOOL)supportsSecureCoding;
@end
