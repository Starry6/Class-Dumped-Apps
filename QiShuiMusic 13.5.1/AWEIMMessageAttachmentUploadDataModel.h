@interface AWEIMMessageAttachmentUploadDataModel : NSObject
@property (nonatomic) AWEIMMessageAttachmentDBModel videoCoverDBModel;
@property (nonatomic) AWEIMSendMessageAttachmentObject sendObj;
@property (nonatomic) NSMutableArray dbModelArray;
@property (nonatomic) NSString messageID;
@property (nonatomic) q messageType;
@property (nonatomic) NSString conversationID;
@property (nonatomic) NSMutableDictionary content;
@property (nonatomic) NSString videoAssetIdentifier;
- (id)sendObj;
- (id)dbModelArray;
- (void)setDbModelArray:;
- (void)setSendObj:;
- (void)setVideoAssetIdentifier:;
- (void)setVideoCoverDBModel:;
- (id)videoAssetIdentifier;
- (id)videoCoverDBModel;
- (id)content;
- (id)messageID;
- (long long)messageType;
- (void)setContent:;
- (void).cxx_destruct;
- (void)setMessageID:;
- (void)setMessageType:;
- (id)conversationID;
- (void)setConversationID:;
@end
