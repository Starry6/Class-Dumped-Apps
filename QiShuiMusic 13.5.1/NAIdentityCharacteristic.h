@interface NAIdentityCharacteristic : NSObject
@property (nonatomic) @? retrievalBlock;
@property (nonatomic) @? comparisonBlock;
@property (nonatomic) @? hashBlock;
@property (nonatomic) q role;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)retrievalBlock;
- (id)init;
- (id)comparisonBlock;
- (void)setComparisonBlock:;
- (id)hashBlock;
- (unsigned long long)hash;
- (void)setHashBlock:;
- (void)setRole:;
- (void).cxx_destruct;
- (long long)role;
- (id)description;
- (void)setRetrievalBlock:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
