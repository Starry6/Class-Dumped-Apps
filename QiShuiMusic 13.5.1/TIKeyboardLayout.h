@interface TIKeyboardLayout : NSObject
@property (nonatomic) BOOL usesTwoHands;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
- (void)addKeyWithExactString:frame:;
- (void)dealloc;
- (id)firstKeyString;
- (id)_decodeCGRectForKey:withDecoder:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)frame;
- (void)encodeWithCoder:;
- (void)addKeyWithString:frame:;
- (void)enumerateKeysUsingBlock:;
- (void)_encodeCGRect:forKey:withCoder:;
- (BOOL)usesTwoHands;
- (id)description;
- (void)ensureStringCapacity:;
- (long long)keyContainingPoint:;
- (BOOL)isEqual:;
- (void)ensureFrameCapacity:;
- (id)initWithCapacity:;
- (void)setUsesTwoHands:;
+ (BOOL)supportsSecureCoding;
@end
