@interface CVNLPTextDecodingToken : NSObject
@property (nonatomic) NSString string;
@property (nonatomic) BOOL hasPrecedingSpace;
@property (nonatomic) NSString terminatingCharacter;
@property (nonatomic) NSNumber score;
@property (nonatomic) NSNumber alignmentScore;
@property (nonatomic) {_NSRange=QQ} activationRange;
@property (nonatomic) NSString fullString;
- (id)string;
- (id)score;
- (void).cxx_destruct;
- (id)fullString;
- (id)initWithString:score:alignmentScore:activationRange:terminatingCharacter:;
- (id)initWithString:score:activationRange:terminatingCharacter:;
- (id)initWithString:score:activationRange:hasPrecedingSpace:;
- (BOOL)hasPrecedingSpace;
- (id)terminatingCharacter;
- (id)alignmentScore;
- (id)activationRange;
@end
