@interface IMGroupActionChatItem : IMTranscriptChatItem
@property (nonatomic) q actionType;
@property (nonatomic) IMHandle sender;
- (long long)actionType;
- (id)sender;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)_initWithItem:sender:;
@end
