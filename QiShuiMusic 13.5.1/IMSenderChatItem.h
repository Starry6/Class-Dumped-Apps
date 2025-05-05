@interface IMSenderChatItem : IMTranscriptChatItem
@property (nonatomic) IMHandle handle;
@property (nonatomic) NSString displayName;
@property (nonatomic) q transcriptSharingMessageType;
- (id)handle;
- (void)setDisplayName:;
- (id)displayName;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (long long)transcriptSharingMessageType;
- (id)_initWithItem:handle:displayName:transcriptSharingMessageType:;
- (id)_initWithItem:handle:;
@end
