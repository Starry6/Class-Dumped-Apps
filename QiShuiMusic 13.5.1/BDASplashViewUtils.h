@interface BDASplashViewUtils : NSObject
@property (nonatomic) double scaling;
@property (nonatomic) double heightErrorRange;
@property (nonatomic) double widthErrorRange;
- (double)widthErrorRange;
- (id)getLocateCenterWithOriginalCenter:;
- (id)getLocateSizeWithOriginalSize:;
- (double)heightErrorRange;
- (id)initWithResourceSize:targetViewSize:;
- (void)setHeightErrorRange:;
- (void)setWidthErrorRange:;
- (double)scaling;
- (void)setScaling:;
@end
