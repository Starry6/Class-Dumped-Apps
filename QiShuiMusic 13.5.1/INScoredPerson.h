@interface INScoredPerson : NSObject
@property (nonatomic) INPerson person;
@property (nonatomic) NSNumber score;
@property (nonatomic) q recommendation;
- (id)score;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)descriptionAtIndent:;
- (void).cxx_destruct;
- (id)person;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithPerson:score:;
- (id)initWithPerson:recommendation:;
- (id)initWithPerson:score:recommendation:;
- (long long)recommendation;
+ (BOOL)supportsSecureCoding;
@end
