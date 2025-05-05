@interface IESSaaSTIMMessageDeleter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)deleteFilesInConversation:;
- (void)deleteFilesRelatedToMessage:inConversation:;
- (void)hardDeleteAllMessagesInConversation:completion:;
- (void)hardDeleteConversation:options:completion:;
- (void)softDeleteMessage:inConversation:sendToServer:completion:;
- (id)init;
+ (id)sharedInstance;
@end
