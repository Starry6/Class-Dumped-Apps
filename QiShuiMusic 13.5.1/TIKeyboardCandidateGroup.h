@interface TIKeyboardCandidateGroup : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSOrderedSet candidates;
- (id)candidates;
- (void)setCandidates:;
- (void)setTitle:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasAlternativeText;
- (void)addCandidate:;
- (id)initWithTitle:candidates:;
- (id)mutableCandidates;
+ (BOOL)supportsSecureCoding;
@end
