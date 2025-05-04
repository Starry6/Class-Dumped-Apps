@interface AWEIMServiceMsgContainerFeatureConfigComponent : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (id)messageListEnterChatRequestParamsForRequestSource:;
- (void)updateMessageListEnterChatData:requestSource:;
- (void)didFetchEnterChatErrorWithSource:;
+ (BOOL)canCreateComponentWithContext:;
+ (void)didEndUpdateMessageListEnterChatDataWithContext:;
@end
