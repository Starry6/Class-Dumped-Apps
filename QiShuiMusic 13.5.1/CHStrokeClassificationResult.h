@interface CHStrokeClassificationResult : NSObject
@property (nonatomic) NSDictionary strokeClassificationsByStrokeIdentifier;
@property (nonatomic) NSDictionary substrokesByStrokeIdentifier;
@property (nonatomic) NSSet textStrokeIdentifiers;
@property (nonatomic) NSSet nontextCandidates;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithStrokeClassificationsByStrokeIdentifier:substrokesByStrokeIdentifier:nontextCandidates:;
- (id)textStrokeIdentifiers;
- (BOOL)isEquivalentToStrokeClassificationResult:;
- (BOOL)isEqualToStrokeClassificationResult:;
- (id)strokeClassificationsByStrokeIdentifier;
- (id)substrokesByStrokeIdentifier;
- (id)nontextCandidates;
+ (BOOL)supportsSecureCoding;
@end
