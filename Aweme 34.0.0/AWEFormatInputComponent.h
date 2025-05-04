@interface AWEFormatInputComponent : AWEIMComponentBase
@property (nonatomic) AWEFormatTextInputServiceImpl serviceImpl;
- (void)componentDidMounted:;
- (id)serviceImpl;
- (void)setServiceImpl:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
