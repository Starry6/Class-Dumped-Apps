@interface AWEFormatMessageCharacterCardComponent : AWEIMFlexComponent
@property (nonatomic) q scene;
- (void)didUpdateFormatRoom:;
- (BOOL)shouldFailFloatGestureRecognizer:;
- (void)componentDidMounted:;
- (void)cellVisibleLifeCycleChanged:;
- (id)displayMessage;
- (void)setScene:;
- (id)init;
- (long long)scene;
@end
