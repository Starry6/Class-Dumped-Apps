@interface AWEIMMessageCombineShareComponent : AWEIMFlexComponent
@property (nonatomic) <AWEIMMessageDataProtocol> messageDataController;
@property (nonatomic) AWEIMMessageBaseViewController messageBaseViewController;
@property (nonatomic) q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (id)messageDataController;
- (void)setMessageDataController:;
- (void)p_updateProps;
- (id)messageBaseViewController;
- (void)setMessageBaseViewController:;
- (void)didTapCoverAction;
- (void)p_addObserve;
- (id)p_getTitleAttributeStringWithText:;
- (id)p_getContentAttributeStringWithText:;
- (id)p_getMsgCountAttributeStringWithCount:;
- (void)p_reportMessageAction:;
- (id)displayMessage;
- (void)setScene:;
- (long long)scene;
- (void).cxx_destruct;
@end
