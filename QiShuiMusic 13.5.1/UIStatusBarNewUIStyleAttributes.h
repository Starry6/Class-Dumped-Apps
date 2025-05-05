@interface UIStatusBarNewUIStyleAttributes : UIStatusBarStyleAttributes
- (BOOL)isTransparent;
- (id)initWithRequest:;
- (id)foregroundColor;
- (long long)legibilityStyle;
- (id)initWithRequest:backgroundColor:foregroundColor:hasBusyBackground:;
- (id)backgroundColorWithTintColor:;
- (id)initWithRequest:backgroundColor:foregroundColor:;
- (BOOL)shouldUseVisualAltitude;
- (void).cxx_destruct;
- (BOOL)isTranslucent;
- (Class)foregroundStyleClass;
- (id)newForegroundStyleWithHeight:;
- (id)copyWithZone:;
@end
