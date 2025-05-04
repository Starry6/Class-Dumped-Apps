@interface AWEIMMessageNotice_UrgeCompanyReply_Plugin : AWEIMFlexComponent
- (void)componentDidMounted:;
- (void)addKVO;
+ (BOOL)canCreateComponentWithContext:;
@end
