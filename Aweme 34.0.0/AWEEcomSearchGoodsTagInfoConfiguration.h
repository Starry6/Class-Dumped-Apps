@interface AWEEcomSearchGoodsTagInfoConfiguration : NSObject
@property (nonatomic) double maxWidth;
@property (nonatomic) double maxHeight;
@property (nonatomic) BOOL allowMultiLines;
@property (nonatomic) q verticalAlignment;
- (BOOL)allowMultiLines;
- (void)setAllowMultiLines:;
- (void)setVerticalAlignment:;
- (void)setMaxHeight:;
- (double)maxWidth;
- (long long)verticalAlignment;
- (void)setMaxWidth:;
- (double)maxHeight;
@end
