@interface CNContactFetchRequest : CNFetchRequest
@property (nonatomic) BOOL disallowsEncodedFetch;
@property (nonatomic) Q batchSize;
@property (nonatomic) Q decoderBatchSize;
@property (nonatomic) Q serialNumber;
@property (nonatomic) Q signpostId;
@property (nonatomic) BOOL rankSort;
@property (nonatomic) BOOL onlyMainStore;
@property (nonatomic) BOOL allowsBatching;
@property (nonatomic) BOOL shouldFailIfAccountNotYetSynced;
@property (nonatomic) NSPredicate predicate;
@property (nonatomic) NSArray keysToFetch;
@property (nonatomic) BOOL mutableObjects;
@property (nonatomic) BOOL unifyResults;
@property (nonatomic) q sortOrder;
- (unsigned long long)serialNumber;
- (long long)sortOrder;
- (BOOL)mutableObjects;
- (BOOL)allowsBatching;
- (void)setAllowsBatching:;
- (id)keysToFetch;
- (id)init;
- (void)setSortOrder:;
- (unsigned long long)batchSize;
- (void)setBatchSize:;
- (void)setRankSort:;
- (BOOL)requiresMeContactAuthorization;
- (BOOL)rankSort;
- (id)effectivePredicate;
- (id)initWithKeysToFetch:;
- (id)initWithCoder:;
- (void)setShouldFailIfAccountNotYetSynced:;
- (BOOL)shouldFailIfAccountNotYetSynced;
- (id)predicate;
- (BOOL)onlyMainStore;
- (void)encodeWithCoder:;
- (void)setDecoderBatchSize:;
- (void)setOnlyMainStore:;
- (BOOL)unifyResults;
- (BOOL)disallowsEncodedFetch;
- (unsigned long long)decoderBatchSize;
- (void)setPredicate:;
- (void)setUnifyResults:;
- (void).cxx_destruct;
- (id)effectiveKeysToFetch;
- (id)description;
- (void)setDisallowsEncodedFetch:;
- (unsigned long long)signpostId;
- (void)setMutableObjects:;
- (void)setKeysToFetch:;
- (void)acceptVisitor:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (unsigned long long)makeSerialNumber;
+ (unsigned long long)makeSignpostId;
@end
