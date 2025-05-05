@interface CKMultiValueMergeableDeltaRegisterState : NSObject
@property (nonatomic) NSUUID identifier;
@property (nonatomic) CKDistributedTimestampStateVector vector;
@property (nonatomic) NSData salt;
- (id)init;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)salt;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)vector;
- (id)initWithIdentifier:vector:salt:;
+ (BOOL)supportsSecureCoding;
+ (id)newSalt;
@end
