@interface IMTransferServicesController : NSObject
- (void)getNicknameWithRecordID:decryptionKey:completionBlock:;
- (void)receiveFileTransfer:topic:path:requestURLString:ownerID:signature:decryptionKey:fileSize:progressBlock:completionBlock:;
- (void)setPersonalNickname:oldRecordID:completionBlock:;
- (void)deleteAllPersonalNicknamesWithCompletion:;
- (void)_sendFilePath:topic:userInfo:transferID:sourceAppID:encryptFile:retries:progressBlock:completionBlock:;
- (void)sendFilePath:topic:transferID:encryptFile:progressBlock:completionBlock:;
- (void)sendFilePath:topic:userInfo:transferID:encryptFile:progressBlock:completionBlock:;
- (void)sendFilePath:topic:userInfo:transferID:sourceAppID:encryptFile:progressBlock:completionBlock:;
- (void)_receiveFileTransfer:topic:path:requestURLString:ownerID:sourceAppID:signature:decryptionKey:retries:fileSize:progressBlock:completionBlock:;
- (void)receiveFileTransfer:topic:path:requestURLString:ownerID:sourceAppID:signature:decryptionKey:fileSize:progressBlock:completionBlock:;
- (void)cancelSendTransferID:;
- (void)preWarmMMCSForOwnerID:;
+ (id)sharedInstance;
@end
