@interface AWEIMMessageNotice_Redpacket_Plugin : AWEIMFlexComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)noticeMessage:didClickWithTemplateModelIndex:;
- (BOOL)isLuckyKing;
@end
