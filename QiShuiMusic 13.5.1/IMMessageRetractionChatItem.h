@interface IMMessageRetractionChatItem : IMTranscriptChatItem
@property (nonatomic) IMHandle sender;
@property (nonatomic) BOOL isFromMe;
@property (nonatomic) BOOL isFailedRetraction;
@property (nonatomic) BOOL canRetryFailedRetraction;
@property (nonatomic) q partIndex;
@property (nonatomic) NSArray retractionUnsupportedByHandles;
@property (nonatomic) IMMessage message;
@property (nonatomic) NSString messageGUID;
@property (nonatomic) Q replyCount;
@property (nonatomic) NSString threadIdentifier;
- (id)threadIdentifier;
- (id)sender;
- (id)message;
- (void).cxx_destruct;
- (BOOL)canDelete;
- (long long)partIndex;
- (BOOL)isFromMe;
- (BOOL)canRetryFailedRetraction;
- (id)retractionUnsupportedByHandles;
- (BOOL)isFailedRetraction;
- (id)messageGUID;
- (unsigned long long)replyCount;
- (id)_initWithItem:partIndex:isFailedRetraction:retractionUnsupportedByHandles:sender:isFromMe:;
- (id)_retractedMessageItem;
@end
