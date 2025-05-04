@interface AWESearchSeedFilterViewPosConfiguration : NSObject
@property (nonatomic) double topMargin;
@property (nonatomic) double leftMargin;
@property (nonatomic) double bottomMargin;
@property (nonatomic) double rightMargin;
@property (nonatomic) double innerMargin;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
- (void)setInnerMargin:;
- (double)innerMargin;
- (double)leftMargin;
- (void)setLeftMargin:;
- (double)bottomMargin;
- (double)rightMargin;
- (double)topMargin;
- (void)setRightMargin:;
- (double)centerX;
- (double)centerY;
- (void)setBottomMargin:;
- (void)setTopMargin:;
- (void)setCenterX:;
- (void)setCenterY:;
@end
