@interface IESLiveCommentWidgetInputHelper : NSObject
@property (nonatomic) IESLiveCommentContext commentContext;
@property (nonatomic) IESLiveEmojiTextParser emojiParser;
@property (nonatomic) NSMutableArray atUserArray;
@property (nonatomic) Q commentReplyLinkSwitch;
- (void)setAtUserArray:;
- (void)textView:replaceRange:withText:;
- (void)setEmojiParser:;
- (void)addAtUser:atRange:;
- (id)atUserArray;
- (id)commentContext;
- (unsigned long long)commentReplyLinkSwitch;
- (id)emojiParser;
- (id)initWithCommentContext:diContext:;
- (void)removeAtUser:inTextView:;
- (void)setCommentContext:;
- (void)setCommentReplyLinkSwitch:;
- (id)structureContentIn:withPlainText:emoji:;
- (void)updateAtUserRange:with:;
- (BOOL)updateAtUserRangeOfTextView:inRange:withText:;
- (void)updateRangeInAttributed:locationOffset:lengthOffset:;
- (id)updateRtfContentWithPlainText:;
- (void).cxx_destruct;
- (void)textViewDidChange:;
- (BOOL)textView:shouldChangeTextInRange:replacementText:;
@end
