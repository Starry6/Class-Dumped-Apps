@interface IESSaaSTIMOSendMessage : MTLModel
@property (nonatomic) NSString preferredUUID;
@property (nonatomic) NSDate preferredDate;
@property (nonatomic) BOOL skipSend;
@property (nonatomic) NSString overrideMessageID;
@property (nonatomic) q status;
@property (nonatomic) NSMutableDictionary files;
@property (nonatomic) BOOL appendOldClientMessageIdToExt;
@property (nonatomic) q forceOrderIndex;
@property (nonatomic) q forceSenderID;
@property (nonatomic) NSDictionary content;
@property (nonatomic) q messageType;
@property (nonatomic) NSDictionary syncedExt;
@property (nonatomic) NSDictionary localExt;
@property (nonatomic) NSArray mentionedUsers;
@property (nonatomic) IESSaaSTIMOReferMessageInfo referMessageInfo;
- (long long)forceOrderIndex;
- (void)addFilesFromMessage:;
- (void)addLocalFileSendWithDisplayType:localFileURL:mimeType:fileType:ext:;
- (void)addReferMessage:messageType:hint:;
- (void)addRemoteFileWithDisplayType:remotePath:mimeType:md5:length:fileType:ext:;
- (BOOL)appendOldClientMessageIdToExt;
- (void)fakeSender:;
- (long long)forceSenderID;
- (id)localExt;
- (id)mentionedUsers;
- (void)overrideExistingMessageContentWithMessageIdentifier:;
- (id)overrideMessageID;
- (id)preferredDate;
- (id)preferredUUID;
- (id)referMessageInfo;
- (void)setAppendOldClientMessageIdToExt:;
- (void)setForceOrderIndex:;
- (void)setForceSenderID:;
- (void)setLocalExt:;
- (void)setMentionedUsers:;
- (void)setNeedToSyncWithOldSDK;
- (void)setOverrideMessageID:;
- (void)setPreferredDate:;
- (void)setPreferredUUID:;
- (void)setReferMessageInfo:;
- (void)setSkipSend:;
- (void)setSyncedExt:;
- (void)skipRealSendAndMarkAsFailed;
- (void)skipRealSendAndMarkAsSendingFileParts;
- (void)skipRealSendAndMarkAsSent;
- (BOOL)skipSend;
- (id)syncedExt;
- (id)content;
- (void)setStatus:;
- (long long)messageType;
- (void)setContent:;
- (void).cxx_destruct;
- (void)setMessageType:;
- (long long)status;
- (id)files;
- (void)setFiles:;
@end
