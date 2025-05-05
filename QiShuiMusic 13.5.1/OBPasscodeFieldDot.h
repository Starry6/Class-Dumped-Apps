@interface OBPasscodeFieldDot : UIView
@property (nonatomic) BOOL filled;
- (id)init;
- (id)intrinsicContentSize;
- (void)_updateView;
- (void)traitCollectionDidChange:;
- (void)setFilled:;
- (BOOL)isFilled;
@end
