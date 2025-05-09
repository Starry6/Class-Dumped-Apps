@interface AWEIMAssembleTextUIContextModel : NSObject
@property (nonatomic) BOOL isCompany;
@property (nonatomic) UIColor textColor;
@property (nonatomic) UIFont font;
@property (nonatomic) NSParagraphStyle paragraphStyle;
@property (nonatomic) Q emoticonFillType;
@property (nonatomic) BOOL needUnderlineForRichText;
@property (nonatomic) UIColor highlightColorForRichText;
@property (nonatomic) BOOL needUnderlineForLinkAndPhone;
@property (nonatomic) UIColor highlightColorForLinkAndPhone;
@property (nonatomic) q style;
@property (nonatomic) @? tapActionBlock;
- (id)tapActionBlock;
- (void)setTapActionBlock:;
- (void)setHighlightColorForRichText:;
- (void)setHighlightColorForLinkAndPhone:;
- (void)setEmoticonFillType:;
- (unsigned long long)emoticonFillType;
- (id)highlightColorForRichText;
- (BOOL)needUnderlineForRichText;
- (id)highlightColorForLinkAndPhone;
- (BOOL)needUnderlineForLinkAndPhone;
- (void)setNeedUnderlineForRichText:;
- (void)setNeedUnderlineForLinkAndPhone:;
- (void)setTextColor:;
- (long long)style;
- (id)font;
- (id)paragraphStyle;
- (void).cxx_destruct;
- (void)setFont:;
- (id)textColor;
- (void)setStyle:;
- (void)setParagraphStyle:;
- (BOOL)isCompany;
- (void)setIsCompany:;
+ (id)paragraphStyleForTextLinkMessage;
+ (id)paragraphStyleForGroupNotice;
+ (id)highlightColorForGroupNotice;
+ (id)defaultContext;
@end
