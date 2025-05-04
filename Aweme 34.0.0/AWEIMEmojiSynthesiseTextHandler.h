@interface AWEIMEmojiSynthesiseTextHandler : NSObject
@property (nonatomic) NLEInterface_OC nleInterface;
@property (nonatomic) NLESegmentVideo_OC nleVideoSegment;
@property (nonatomic) NLESegmentTextSticker_OC nleTextSticker;
- (id)nleInterface;
- (void)setNleInterface:;
- (void)p_synthesiseEmoji:inputFilePath:text:withOutputFilePath:completion:;
- (id)emojiMergeTextConfig;
- (void)synthesiseEmoji:inputFilePath:withText:uniqueKey:completion:;
- (id)nleVideoSegment;
- (void)setNleVideoSegment:;
- (id)nleTextSticker;
- (void)setNleTextSticker:;
- (id)init;
- (void).cxx_destruct;
+ (id)absolutePathForRelativePath:;
+ (void)setSynthesisVmojiPath:forKey:;
+ (id)getSynthesisVmojiPathWithKey:;
+ (id)keyForStickerID:text:version:;
+ (void)setLaterDeleteMessageID:;
+ (void)clearAllGiphyMesssageLocalFile;
@end
