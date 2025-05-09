@interface PBServerConnection : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> memberQueue;
@property (nonatomic) NSXPCConnection memberQ_serverConnection;
@property (nonatomic) NSXPCConnection serverConnection;
- (void)setMemberQueue:;
- (id)memberQueue;
- (id)serverConnection;
- (id)init;
- (id)pasteboardWithName:error:;
- (id)pasteboardWithName:createIfNeeded:authenticationBlock:dataOwnerBlock:error:;
- (id)localGeneralPasteboardWithAuthenticationBlock:dataOwnerBlock:error:;
- (void)setMemberQ_serverConnection:;
- (void)getAllPasteboardsCompletionBlock:;
- (void)pasteboardWithName:completionBlock:;
- (void)pasteboardWithName:createIfNeeded:authenticationBlock:dataOwnerBlock:completionBlock:;
- (void)requestPatternDetectionsFromPasteboardWithName:UUID:authenticationMessage:itemIndex:patterns:needValues:dataOwner:completionBlock:;
- (void)savePasteboard:dataProviderEndpoint:completionBlock:;
- (id)memberQ_serverConnection;
- (void)performJanitorialTasksCompletionBlock:;
- (void)localGeneralPasteboardWithAuthenticationBlock:dataOwnerBlock:completionBlock:;
- (void)localGeneralPasteboardCompletionBlock:;
- (id)requestSecurePasteAuthenticationMessageWithContext:forClientVersionedPID:error:;
- (void)didPastePasteboard:;
- (void)deletePersistentPasteboardWithName:completionBlock:;
- (void).cxx_destruct;
- (void)localGeneralPasteboardWithAuthenticationBlock:completionBlock:;
- (void)helloCompletionBlock:;
- (id)remoteContentForSlotStyle:pasteButtonTag:error:;
- (unsigned long long)deletePersistentPasteboardWithName:error:;
- (id)remoteContentForLayerContextWithId:slotStyle:pasteButtonTag:error:;
- (id)savePasteboard:dataProviderEndpoint:error:;
- (void)requestItemFromPasteboardWithName:UUID:authenticationMessage:itemIndex:typeIdentifier:dataOwner:loadContext:completionBlock:;
+ (id)defaultConnection;
+ (unsigned long long)beginListeningToPasteboardChangeNotifications;
+ (void)simulateCrashReportForAuthorizationWithAuthenticationMessage:;
@end
