@interface PFUbiquityKnowledgeVector : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) Q length;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (long long)compare:;
- (id)description;
- (unsigned long long)length;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithKnowledgeVectorString:;
- (id)initWithKnowledgeVectorDictionary:;
- (id)initWithStoreKnowledgeVectorDictionary:;
- (void)_updateHash;
- (id)createSetOfAllPeerIDsWithOtherVector:;
+ (BOOL)supportsSecureCoding;
+ (id)createKnowledgeVectorDictionaryFromString:;
@end
