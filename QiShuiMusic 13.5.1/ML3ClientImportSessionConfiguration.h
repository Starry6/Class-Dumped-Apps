@interface ML3ClientImportSessionConfiguration : NSObject
@property (nonatomic) NSString libraryPath;
@property (nonatomic) NSInteger sourceType;
@property (nonatomic) Q operationCount;
@property (nonatomic) BOOL allowAccountMerging;
@property (nonatomic) ML3DatabasePrivacyContext privacyContext;
- (id)init;
- (int)sourceType;
- (void)setPrivacyContext:;
- (void)setSourceType:;
- (id)initWithCoder:;
- (unsigned long long)operationCount;
- (id)libraryPath;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)privacyContext;
- (id)copyWithZone:;
- (void)setLibraryPath:;
- (void)setOperationCount:;
- (BOOL)allowAccountMerging;
- (void)setAllowAccountMerging:;
+ (BOOL)supportsSecureCoding;
@end
