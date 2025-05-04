@interface AWEIMMixPhotoStateCheckManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)iesim_didInsertNewMessagesWithMessageIdentifiers:belongingConversationMap:reason:context:;
- (void)iesim_didFinishLogin;
- (void)iesim_didFinishLogout;
- (id)init;
+ (id)sharedInstance;
@end
