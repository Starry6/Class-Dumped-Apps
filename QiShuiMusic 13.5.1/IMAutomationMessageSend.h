@interface IMAutomationMessageSend : NSObject
@property (nonatomic) NSMutableSet pendingSendGUIDs;
@property (nonatomic) NSMutableDictionary sentMessageInfo;
- (id)init;
- (void).cxx_destruct;
- (id)createIMMessageToSendWithMessage:filePaths:bundleID:attributionInfoName:isAudioMessage:threadIdentifier:;
- (id)sendMessage:destinationID:filePaths:groupID:service:timeOut:error:;
- (id)sendMessage:destinationID:filePaths:groupID:bundleID:attributionInfoName:service:timeOut:error:;
- (id)sendMessage:destinationID:timeOut:threadIdentifier:error:;
- (id)sendMessage:destinationID:filePaths:isAudioMessage:groupID:bundleID:attributionInfoName:service:timeOut:threadIdentifier:error:;
- (id)sendIMMessage:chat:timeOut:resultDict:error:;
- (id)loadHighResolutionFileForMessageGUID:withFilePathIndex:;
- (id)deleteAttachmentWithMessageGUID:andFilePathIndex:;
- (id)clearAttachmentsUploadedToCloudkit;
- (id)uploadAttachmentToCloudkitWithMessageGUID:andFilePathIndex:;
- (id)fileSizeForMessageGUID:withFilePathIndex:;
- (id)dictionaryFromGUID:;
- (id)pendingSendGUIDs;
- (void)setPendingSendGUIDs:;
- (id)sentMessageInfo;
- (void)setSentMessageInfo:;
- (id)copyFilePathsToTmpLocation:;
- (void)deleteTmpFilePath:;
- (id)appendFilePathsWithGUIDs:withText:;
@end
