@interface IMMessageChatItem : IMTranscriptChatItem
@property (nonatomic) IMMessage message;
@property (nonatomic) IMMessageItem messageItem;
@property (nonatomic) BOOL isFromMe;
@property (nonatomic) BOOL failed;
@property (nonatomic) NSDate time;
@property (nonatomic) IMHandle sender;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)time;
- (id)sender;
- (id)message;
- (BOOL)failed;
- (BOOL)isFromMe;
- (BOOL)canReply;
- (id)messageItem;
@end
