@interface IMFaceTimeUtilities : NSObject
+ (BOOL)isScreenShareActivityForTUConversation:;
+ (void)initiateTUConversationForParticipants:senderAddress:videoEnabled:groupID:displayName:;
+ (void)joinExistingConversationForTUCoversation:videoEnabled:;
+ (BOOL)activeTUConversationHasActivitySession:;
+ (id)activityMetadataForTUConversation:;
+ (id)activitySessionForTUConversation:;
+ (BOOL)conversationIsAVLessSharePlay:;
+ (BOOL)conversationIsVideoCall:;
+ (void)leaveTUConversation;
+ (id)remoteParticipantHandleSharingScreenForTUConversation:;
+ (id)currentCallForTUConversation:;
+ (void)initiateTUDialRequestForSingleParticipant:videoEnabled:;
@end
