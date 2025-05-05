@interface UIPrintSupplyLevelView : UIView
@property (nonatomic) NSInteger supplyLevel;
@property (nonatomic) NSArray colors;
- (id)colors;
- (void)setColors:;
- (void)drawRect:;
- (BOOL)isOpaque;
- (void).cxx_destruct;
- (int)supplyLevel;
- (void)setSupplyLevel:;
@end
