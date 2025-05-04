@interface AWEIMEnterChatInsertMsgComponent : AWEIMComponentBase
@property (nonatomic) RxTwoTuple sendUserActionForRightNow;
@property (nonatomic) RxTwoTuple sendUserActionForWaitUser;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (id)messageListEnterChatRequestParamsForRequestSource:;
- (void)updateMessageListEnterChatData:requestSource:;
- (void)setSendUserActionForRightNow:;
- (void)setSendUserActionForWaitUser:;
- (id)sendUserActionForRightNow;
- (id)sendUserActionForWaitUser;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
