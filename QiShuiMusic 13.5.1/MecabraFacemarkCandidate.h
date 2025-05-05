@interface MecabraFacemarkCandidate : NSObject
@property (nonatomic) NSString string;
@property (nonatomic) NSString category;
- (id)string;
- (id)surface;
- (void)dealloc;
- (id)description;
- (id)category;
- (id)initWithString:category:;
+ (id)candidateWithString:category:;
+ (id)copyFacemarkCandidatesForLocale:;
+ (id)copyFacemarkCandidatesForLanguage:;
@end
