@interface AWEFormatTyperComponent : AWEIMComponentBase
- (void)componentDidMounted:;
- (id)createFormatTyperWithScene:identifier:;
- (id)init;
+ (BOOL)canCreateComponentWithContext:;
@end
