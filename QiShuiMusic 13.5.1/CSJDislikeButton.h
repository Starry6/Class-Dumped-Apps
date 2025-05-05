@interface CSJDislikeButton : UIButton
- (void)updateDarkStyle;
- (void)updateLightStyle;
- (BOOL)pointInside:withEvent:;
- (void)traitCollectionDidChange:;
@end
