@interface AWEIMPublishAtFriendMessage : AWEIMMessage
@property (nonatomic) NSAttributedString contentTextString;
@property (nonatomic) NSAttributedString quoteTextString;
@property (nonatomic) NSString itemId;
@property (nonatomic) NSString uid;
@property (nonatomic) NSString text;
@property (nonatomic) NSString contentTitle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)publishUserName;
- (id)quoteTextString;
- (id)attributedContent;
- (id)calculateAttributedContent;
- (id)contentTextString;
- (id)getContentDict;
- (id)initWithContentDict:;
- (void)setContentTextString:;
- (void)setQuoteTextString:;
- (id)contentAttributes;
- (id)uid;
- (void)setText:;
- (void)setUid:;
- (void).cxx_destruct;
- (id)text;
- (id)copyWithZone:;
- (id)contentTitle;
- (void)setContentTitle:;
- (id)itemId;
- (void)setItemId:;
@end
