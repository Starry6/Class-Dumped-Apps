@interface TICandidateRequestToken : NSObject
@property (nonatomic) NSUUID UUID;
@property (nonatomic) TIDocumentState documentState;
@property (nonatomic) NSInteger shiftState;
- (id)documentState;
- (id)init;
- (int)shiftState;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)UUID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isSameRequestAs:;
- (id)initForKeyboardState:;
- (id)shortIdentifier;
+ (BOOL)supportsSecureCoding;
+ (id)tokenForKeyboardState:;
@end
