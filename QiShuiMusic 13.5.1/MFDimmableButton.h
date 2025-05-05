@interface MFDimmableButton : UIButton
@property (nonatomic) BOOL stickyHiddenValue;
@property (nonatomic) Q autohidePreference;
@property (nonatomic) BOOL hidesWhenDimmedIfNotSelected;
@property (nonatomic) BOOL dimmed;
- (BOOL)isDimmed;
- (void)setSelected:;
- (unsigned long long)state;
- (void)setHidden:;
- (void)setDimmed:;
- (void)_setHidden:external:;
- (void)setHidesWhenDimmedIfNotSelected:;
- (void)_updateDimmedHidingIfNecessary;
- (unsigned long long)autohidePreference;
- (BOOL)hidesWhenDimmedIfNotSelected;
- (BOOL)stickyHiddenValue;
- (void)setStickyHiddenValue:;
@end
