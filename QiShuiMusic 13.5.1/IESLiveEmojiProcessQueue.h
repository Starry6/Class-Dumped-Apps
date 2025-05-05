@interface IESLiveEmojiProcessQueue : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> emojiProcessQueue;
- (id)emojiProcessQueue;
- (void)setEmojiProcessQueue:;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
