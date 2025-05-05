@interface AMSLookupItemArtworkColor : NSObject
@property (nonatomic) double alpha;
@property (nonatomic) double blue;
@property (nonatomic) double green;
@property (nonatomic) double red;
- (double)red;
- (double)blue;
- (void)setRed:;
- (void)setAlpha:;
- (void)setGreen:;
- (void)setBlue:;
- (double)green;
- (double)alpha;
@end
