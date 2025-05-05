@interface OBBoldTrayButton : OBTrayButton
@property (nonatomic) NSNumber buttonStateRequiredHeight;
- (void)updateConfiguration;
- (id)intrinsicContentSize;
- (void)tintColorDidChange;
- (void)setEnabled:;
- (void).cxx_destruct;
- (void)showsBusyIndicator;
- (id)boldConfiguration;
- (void)hidesBusyIndicator;
- (id)buttonStateRequiredHeight;
- (void)setButtonStateRequiredHeight:;
+ (id)boldButton;
@end
