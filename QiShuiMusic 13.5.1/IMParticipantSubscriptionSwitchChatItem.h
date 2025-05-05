@interface IMParticipantSubscriptionSwitchChatItem : IMTranscriptChatItem
@property (nonatomic) IMHandle sender;
@property (nonatomic) IMHandle otherHandle;
- (id)sender;
- (void).cxx_destruct;
- (id)otherHandle;
- (id)_initWithItem:sender:otherHandle:;
@end
