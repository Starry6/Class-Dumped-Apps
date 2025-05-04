@interface AWEIMEntertainmentCommentShareMessageViewModel : NSObject
@property (nonatomic) AWEIMMessage message;
@property (nonatomic) AWEIMMessageConversation conversation;
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
- (void)p_updateEntCommentShareModelWithMessage:;
- (id)unAvailiableText;
- (void)setBubleViewModel:;
- (id)message;
- (void).cxx_destruct;
- (void)setMessage:;
- (id)conversation;
- (void)setConversation:;
+ (id)contentSizeWithMesasge:;
@end
