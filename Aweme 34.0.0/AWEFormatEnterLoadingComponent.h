@interface AWEFormatEnterLoadingComponent : AWEIMComponentBase
- (void)didUpdateFormatRoom:;
- (void)getFormatRoomInfoFailedWithError:;
- (void)didExitFormatRoom;
- (void)hostVC_viewWillAppear;
- (void)componentDidMounted:;
- (id)init;
+ (BOOL)canCreateComponentWithContext:;
@end
