@interface UIKeyboardTransitionSlice : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} startRect;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} endRect;
@property (nonatomic) UIKBCacheToken startToken;
@property (nonatomic) UIKBCacheToken endToken;
@property (nonatomic) NSInteger normalization;
@property (nonatomic) BOOL delayCrossfade;
@property (nonatomic) BOOL hasGeometry;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)startRect;
- (id)endRect;
- (void)setStartRect:;
- (void)setEndRect:;
- (void)addStartRect:end:;
- (BOOL)hasGeometry;
- (id)startToken;
- (void)setStartToken:;
- (id)endToken;
- (void)setEndToken:;
- (int)normalization;
- (void)setNormalization:;
- (BOOL)delayCrossfade;
- (void)setDelayCrossfade:;
+ (id)sliceWithStart:end:;
@end
