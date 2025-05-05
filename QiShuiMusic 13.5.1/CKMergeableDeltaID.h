@interface CKMergeableDeltaID : NSObject
@property (nonatomic) NSString deltaIdentifier;
@property (nonatomic) CKMergeableValueID valueID;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)deltaIdentifier;
- (id)valueID;
- (id)initWithDeltaIdentifier:valueID:;
- (void)setDeltaIdentifier:;
- (void)setValueID:;
+ (BOOL)supportsSecureCoding;
@end
