@interface AWEIMShareProfileUtility : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)openSendShareProfilePanelWithConversation:;
- (void)shareProfileMessageWithUserModel:toConversation:;
- (void)transferProfileWithWithMessage:;
- (BOOL)isShareProfileMessageType:;
- (id)makeShareProfileMessageWithUser:fromConType:coverList:;
- (void)getTopAwemeModelWithWithUserModel:extraParams:completion:;
+ (id)shareInstance;
@end
