@interface IESLivePKTagBuilderConfig : NSObject
@property (nonatomic) {CGSize=dd} tagIconSize;
@property (nonatomic) UIFont tagFont;
@property (nonatomic) double tagIconInsidePadding;
@property (nonatomic) BOOL useLegacyPadding;
- (void)setTagIconSize:;
- (id)tagFont;
- (void)setTagFont:;
- (void)setTagIconInsidePadding:;
- (void)setUseLegacyPadding:;
- (double)tagIconInsidePadding;
- (id)tagIconSize;
- (BOOL)useLegacyPadding;
- (id)init;
- (void).cxx_destruct;
@end
