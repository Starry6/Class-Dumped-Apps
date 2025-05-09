@interface AWEIMNoticeQuoteReplyMessage : AWEIMMessage
@property (nonatomic) AWEURLModel urlModel;
@property (nonatomic) NSString md5;
@property (nonatomic) NSString fileId;
@property (nonatomic) NSString secretKey;
@property (nonatomic) NSString tosKey;
@property (nonatomic) NSInteger fileType;
@property (nonatomic) BOOL contentIsAvailable;
@property (nonatomic) NSArray templateArray;
@property (nonatomic) AWEIMLinkTextUtility textUtility;
@property (nonatomic) NSAttributedString contentTextString;
@property (nonatomic) NSAttributedString quoteTextString;
@property (nonatomic) NSString contentText;
@property (nonatomic) NSString quoteText;
@property (nonatomic) NSString gdLabel;
@property (nonatomic) NSString quoteName;
@property (nonatomic) NSString quoteContent;
@property (nonatomic) q quoteNoticeType;
@property (nonatomic) NSString quoteTitle;
@property (nonatomic) NSAttributedString quoteAttributedContent;
@property (nonatomic) {CGSize=dd} quoteAttributedContentSize;
@property (nonatomic) NSArray richTextInfos;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (id)gdLabel;
- (id)attributedContent;
- (id)tosKey;
- (id)urlModel;
- (void)setGdLabel:;
- (id)initWithContentDict:;
- (id)contentComponentName;
- (void)setUrlModel:;
- (id)getContentDict;
- (BOOL)isUserCellType;
- (BOOL)enableBubbleColorWithType:isQuoteReply:;
- (BOOL)supportRefactorCell;
- (id)supportMessageMenuTypeList;
- (BOOL)isAllowedEmojiReply;
- (BOOL)isAllowedCellEdit;
- (id)templateArray;
- (void)setRichTextInfos:;
- (id)hintOnInputVCWhenQuoted;
- (BOOL)shouldChangeVisibleStatus;
- (id)calculateAttributedContent;
- (id)quoteText;
- (void)setQuoteText:;
- (long long)quoteNoticeType;
- (void)setQuoteNoticeType:;
- (id)contentTextString;
- (id)quoteTextString;
- (id)quoteAttributedContent;
- (void)setQuoteName:;
- (void)setQuoteContent:;
- (id)richTextInfos;
- (void)setQuoteAttributedContent:;
- (id)quoteTitle;
- (void)setQuoteTitle:;
- (void)setTemplateArray:;
- (void)setTosKey:;
- (BOOL)p_unavaliableDousanMessage;
- (id)quoteAttributedContentSize;
- (void)setQuoteAttributedContentSize:;
- (BOOL)needShowContentModeCenter;
- (id)textUtility;
- (void)setTextUtility:;
- (id)quoteName;
- (id)quoteContent;
- (id)quoteTitleWithMaxWidth:title:tailString:;
- (void)setContentTextString:;
- (void)setQuoteTextString:;
- (int)fileType;
- (id)contentAttributes;
- (void)setSecretKey:;
- (id)extra;
- (id)secretKey;
- (void)setFileType:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setMd5:;
- (id)md5;
- (void)setContentText:;
- (id)contentText;
- (id)fileId;
- (void)setFileId:;
- (BOOL)contentIsAvailable;
- (void)setContentIsAvailable:;
@end
