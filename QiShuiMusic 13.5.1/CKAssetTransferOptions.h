@interface CKAssetTransferOptions : NSObject
@property (nonatomic) NSNumber sparseAware;
@property (nonatomic) NSNumber shouldFetchAssetContent;
@property (nonatomic) NSNumber shouldFetchAssetContentInMemory;
@property (nonatomic) NSNumber useMMCSEncryptionV2;
- (void)setUseMMCSEncryptionV2:;
- (void)setShouldFetchAssetContent:;
- (void)setShouldFetchAssetContentInMemory:;
- (id)shouldFetchAssetContentInMemory;
- (id)shouldFetchAssetContent;
- (id)initWithCoder:;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)useMMCSEncryptionV2;
- (id)description;
- (id)copyWithZone:;
- (id)sparseAware;
- (void)setSparseAware:;
+ (BOOL)supportsSecureCoding;
@end
