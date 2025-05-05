@interface CUIPattern : NSObject
@property (nonatomic) double alpha;
- (void)dealloc;
- (void)setAlpha:;
- (id)pattern;
- (double)alpha;
- (id)description;
- (id)initWithImageRef:;
- (id)_newPattern;
- (void)setPatternInContext:;
- (id)patternImageRef;
@end
