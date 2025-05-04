@interface AWEIMLinkLiveTextAndButtonUserMessageCell : AWEIMTextAndButtonUserMessageCell
- (id)buttonModelForReceiverWithType:;
- (id)linkLiveMessage;
- (void)trackJoinButtonClick;
- (id)defaultMenuItems;
- (void)buttonTapped;
- (id)buttonModel;
+ (id)identifier;
@end
