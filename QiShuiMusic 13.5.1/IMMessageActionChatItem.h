@interface IMMessageActionChatItem : IMTranscriptChatItem
@property (nonatomic) q actionType;
@property (nonatomic) IMHandle sender;
@property (nonatomic) IMHandle otherHandle;
- (long long)actionType;
- (id)sender;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)otherHandle;
- (id)_initWithItem:sender:otherHandle:;
@end
