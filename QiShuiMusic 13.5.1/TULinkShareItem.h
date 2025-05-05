@interface TULinkShareItem : NSObject
@property (nonatomic) TUConversationLink tuConversationLink;
@property (nonatomic) NSString title;
@property (nonatomic) NSURL placeholder;
- (id)placeholder;
- (void)setTitle:;
- (void)setPlaceholder:;
- (id)title;
- (void).cxx_destruct;
- (id)initWithTUConversationLink:title:placeholder:;
- (id)initWithTUConversationLink:;
- (id)tuConversationLink;
- (void)setTuConversationLink:;
@end
