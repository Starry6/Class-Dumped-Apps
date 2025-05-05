@interface CNMemojiBackgroundColor : NSObject
@property (nonatomic) double red;
@property (nonatomic) double green;
@property (nonatomic) double blue;
@property (nonatomic) double alpha;
- (double)red;
- (id)initWithRed:green:blue:alpha:;
- (double)blue;
- (void)setRed:;
- (void)setAlpha:;
- (void)setGreen:;
- (void)setBlue:;
- (double)green;
- (double)alpha;
- (id)initWithColorDescription:alpha:;
- (id)initWithDefaultColorWithAlpha:;
- (id)initWithColorDescription:;
+ (id)log;
@end
