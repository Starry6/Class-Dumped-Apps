@interface AWEIMVideoCommentShareTableViewCellViewModel : NSObject
@property (nonatomic) AWEIMMessage message;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) BOOL awemeAvailiable;
@property (nonatomic) AWEIMCommentShareCommentBubleViewModel bubleViewModel;
@property (nonatomic) BOOL commentAvailiable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithMessage:conversation:;
- (void)p_updateMessageSize;
- (void)updateWithMessage:conversation:;
- (BOOL)commentAvailiable;
- (void)setCommentAvailiable:;
- (id)supportMenuItems;
- (id)bubleViewModel;
- (id)quoteImageSize;
- (id)unAvailiableText;
- (void)setBubleViewModel:;
- (void)p_updateCommentShareModelWithMessage:;
- (BOOL)awemeAvailiable;
- (id)quoteCoverUrlList;
- (id)quoteCoverSize;
- (double)quoteImageViewTopOffset;
- (void)setAwemeAvailiable:;
- (id)message;
- (void).cxx_destruct;
- (void)setMessage:;
- (id)conversation;
- (void)setConversation:;
+ (id)contentSizeWithMesasge:;
+ (id)p_originCoverSize;
+ (BOOL)awemeAvailiableWithMsg:;
@end
