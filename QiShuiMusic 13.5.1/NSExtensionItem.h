@interface NSExtensionItem : NSObject
@property (nonatomic) AKAppleIDAuthenticationContext ak_context;
@property (nonatomic) NSAttributedString attributedTitle;
@property (nonatomic) NSAttributedString attributedContentText;
@property (nonatomic) NSArray attachments;
@property (nonatomic) NSDictionary userInfo;
- (void)ak_setContext:;
- (id)ak_context;
- (id)init;
- (void)dealloc;
- (id)userInfo;
- (id)attributedTitle;
- (id)initWithCoder:;
- (void)setAttributedTitle:;
- (void)encodeWithCoder:;
- (void)setUserInfo:;
- (void)setAttachments:;
- (id)description;
- (id)attachments;
- (id)copyWithZone:;
- (void)setAttributedContentText:;
- (id)attributedContentText;
- (id)_matchingDictionaryRepresentation;
+ (id)extensionItemWithAppleIDAuthenticationContext:;
+ (id)itemWithTitle:attachmentItem:;
+ (BOOL)supportsSecureCoding;
@end
