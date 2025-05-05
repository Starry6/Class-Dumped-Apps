@interface AFSharedConfidenceScore : NSObject
@property (nonatomic) NSString sharedUserId;
@property (nonatomic) Q confidenceScore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)buildDictionaryRepresentation;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)confidenceScore;
- (id)sharedUserId;
- (id)initWithSharedUserId:confidenceScore:;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
