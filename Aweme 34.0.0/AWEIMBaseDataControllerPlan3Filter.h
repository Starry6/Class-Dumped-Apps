@interface AWEIMBaseDataControllerPlan3Filter : NSObject
@property (nonatomic) <AWEIMChatListDataFilterDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldFilterConversation:chatDataControllerType:;
- (BOOL)shouldFilterSDKConversation:settingInfo:coreInfo:chatDataControllerType:;
- (BOOL)shouldIgnoreFilterCacheForConversation:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
