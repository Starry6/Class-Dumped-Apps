@interface EFSandboxedURLWrapper : NSObject
@property (nonatomic) EFDeallocInvocationToken invocable;
@property (nonatomic) NSString sandboxToken;
@property (nonatomic) NSURL url;
@property (nonatomic) BOOL readOnly;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString ef_publicDescription;
- (id)sandboxToken;
- (id)ef_publicDescription;
- (BOOL)isReadOnly;
- (id)url;
- (id)initWithCoder:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)addInvalidationHandler:;
- (id)initWithFileURL:readOnly:;
- (id)invocable;
+ (id)log;
+ (BOOL)supportsSecureCoding;
@end
