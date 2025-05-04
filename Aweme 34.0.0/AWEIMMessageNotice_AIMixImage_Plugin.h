@interface AWEIMMessageNotice_AIMixImage_Plugin : AWEIMFlexComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)noticeMessage:didClickWithTemplateModelIndex:;
- (void)didTapNewStyleNoticeMessage:;
- (void)p_trackGroupNoticeMessageShow;
- (id)p_noticeType:;
+ (BOOL)canCreateComponentWithContext:;
@end
