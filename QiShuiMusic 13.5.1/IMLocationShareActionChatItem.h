@interface IMLocationShareActionChatItem : IMTranscriptChatItem
@property (nonatomic) q actionType;
@property (nonatomic) q direction;
@property (nonatomic) BOOL isFromMe;
@property (nonatomic) IMHandle sender;
@property (nonatomic) IMHandle otherHandle;
- (long long)direction;
- (long long)actionType;
- (id)sender;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)isFromMe;
- (id)otherHandle;
- (id)_initWithItem:sender:otherHandle:;
@end
