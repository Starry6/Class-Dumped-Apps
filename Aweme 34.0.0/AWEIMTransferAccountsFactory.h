@interface AWEIMTransferAccountsFactory : HTSService
@property (nonatomic) IESIMContactPickerController pickerController;
@property (nonatomic) <AWEYAPPickerConfig> config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)contactPickerControllerDidShowViewController:;
- (void)contactPickerControllerDidDismissViewController:;
- (void)showPickerUserControllerWithConfig:;
- (void)updateTransferMessageWithStatus:msg:;
- (void)sendTransferMessageWithContent:preSendMsgID:conversationID:isGroupChat:;
- (void)setConfig:;
- (id)config;
- (void).cxx_destruct;
- (id)pickerController;
- (void)setPickerController:;
@end
