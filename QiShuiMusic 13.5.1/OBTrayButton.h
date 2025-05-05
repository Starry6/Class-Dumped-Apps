@interface OBTrayButton : UIButton
@property (nonatomic) double lastTitleLabelHeight;
- (void)traitCollectionDidChange:;
- (id)buttonFont;
- (id)_fontTextStyle;
- (double)lastTitleLabelHeight;
- (void)setLastTitleLabelHeight:;
+ (id)buttonWithType:;
+ (double)standardHeight;
@end
