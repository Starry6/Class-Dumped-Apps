@interface IMChatIdentifierUtilities : NSObject
+ (id)_randomUnverifiedChatIdentifierForGroupChat;
+ (id)generateUnusedChatIdentifierForGroupChatWithServiceName:chatWithChatIdentifierExists:;
+ (id)_handleBasedPersonCentricIDWithParticipantIDs:chatStyle:;
+ (id)personCentricIDForChatWithGUID:chatIdentifier:chatStyle:groupID:displayName:participantIDs:;
@end
