@interface NSFileProvidingInfo : NSObject
@property (nonatomic) {?=[8I]} readerAuditToken;
@property (nonatomic) NSString readerID;
@property (nonatomic) Q readingOptions;
@property (nonatomic) NSFileProviderKernelMaterializationInfo kernelMaterializationInfo;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)readerAuditToken;
- (id)kernelMaterializationInfo;
- (void)setProvidedItemRecursiveGenerationCount:;
- (id)readerID;
- (unsigned long long)readingOptions;
+ (BOOL)supportsSecureCoding;
+ (id)infoWithReaderID:options:auditToken:kernelMaterializationInfo:;
@end
