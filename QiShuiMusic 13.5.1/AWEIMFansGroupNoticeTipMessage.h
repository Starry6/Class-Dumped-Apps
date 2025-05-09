@interface AWEIMFansGroupNoticeTipMessage : AWEIMMessage
@property (nonatomic) NSAttributedString contentAttributedString;
@property (nonatomic) NSDictionary contentAttributes;
@property (nonatomic) {CGSize=dd} contentSize;
@property (nonatomic) NSDictionary contentDic;
@property (nonatomic) NSString cid;
@property (nonatomic) NSString hintString;
@property (nonatomic) @? noticeTipClickBlock;
- (id)attributedContent;
- (id)contentDic;
- (id)getContentDict;
- (id)getDefaultContentAttributeString;
- (id)getOpenContentAttributeString;
- (id)hintString;
- (id)initWithContentDict:;
- (id)noticeTipClickBlock;
- (void)setContentDic:;
- (void)setNoticeTipClickBlock:;
- (id)contentAttributes;
- (void)setContentAttributes:;
- (id)cid;
- (double)fontSize;
- (void).cxx_destruct;
- (id)contentSize;
- (id)messageSize;
- (id)style;
- (void)setContentSize:;
- (id)contentAttributedString;
- (BOOL)isMute;
- (void)setCid:;
- (void)setContentAttributedString:;
@end
