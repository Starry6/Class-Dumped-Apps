@interface UIKBRenderFactoryiPhonePasscode : UIKBRenderFactoryiPhone
- (id)backgroundTraitsForKeyplane:;
- (id)_traitsForKey:onKeyplane:;
- (id)hashStringElement;
- (id)defaultKeyBackgroundColorName;
- (id)controlKeyTraits;
- (id)activeControlKeyTraits;
- (id)shiftLockControlKeyTraits;
- (double)passcodeEdgeWeight;
@end
