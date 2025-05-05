@interface CJPayStyleCheckMark : UIImageView
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL enable;
- (void)p_applyDefaultAppearance;
- (BOOL)enable;
- (BOOL)selected;
- (id)intrinsicContentSize;
- (void)setSelected:;
- (id)initWithFrame:;
- (void)setEnable:;
- (id)initWithDiameter:;
@end
