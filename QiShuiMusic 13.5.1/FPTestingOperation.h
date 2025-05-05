@interface FPTestingOperation : NSObject
@property (nonatomic) q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)asDeletion;
- (id)asIngestion;
- (id)asLookup;
- (id)asCreation;
- (id)asModification;
- (id)asContentFetch;
- (id)asChildrenEnumeration;
- (id)asCollisionResolution;
- (id)initWithOperationIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
