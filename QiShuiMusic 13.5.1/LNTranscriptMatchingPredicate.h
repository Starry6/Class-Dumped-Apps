@interface LNTranscriptMatchingPredicate : NSObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) q type;
@property (nonatomic) NSUUID executionUUID;
@property (nonatomic) LNEntityIdentifier entityIdentifier;
@property (nonatomic) NSString actionType;
@property (nonatomic) NSString entityType;
- (id)bundleIdentifier;
- (id)actionType;
- (id)initWithCoder:;
- (id)entityIdentifier;
- (void)setBundleIdentifier:;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
- (id)entityType;
- (id)description;
- (id)copyWithZone:;
- (id)executionUUID;
- (id)initWithBundleIdentifier:type:executionUUID:entityIdentifier:actionType:entityType:;
+ (BOOL)supportsSecureCoding;
@end
