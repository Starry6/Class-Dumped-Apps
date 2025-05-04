@interface AWEIMChapterShareMessageViewModel : NSObject
@property (nonatomic) AWEIMMessage message;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) AWEIMChapterShareBubbleViewModel bubbleViewModel;
@property (nonatomic) Q chapterAvailable;
@property (nonatomic) BOOL awemeAvailable;
- (id)initWithMessage:conversation:;
- (unsigned long long)chapterAvailable;
- (void)setChapterAvailable:;
- (void)p_updateChapterShareModelWithMessage:;
- (void)p_updateMessageSize;
- (id)bubbleViewModel;
- (void)updateWithMessage:conversation:;
- (void)setBubbleViewModel:;
- (BOOL)awemeAvailable;
- (void)setAwemeAvailable:;
- (id)message;
- (void).cxx_destruct;
- (void)setMessage:;
- (id)conversation;
- (void)setConversation:;
+ (id)contentSizeWithMesasge:;
+ (id)p_originCoverSize;
+ (id)quoteImageSize:;
@end
