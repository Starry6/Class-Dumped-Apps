@interface IMBlockContactChatItem : IMTranscriptChatItem
@property (nonatomic) C chatStyle;
- (unsigned char)chatStyle;
- (void)setChatStyle:;
- (id)_initWithItem:chatStyle:;
@end
