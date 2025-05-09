@interface AWEIMFansGroupDisturbMessage : AWEIMMessage
@property (nonatomic) BOOL isMuteByAB;
@property (nonatomic) NSAttributedString titleAttributedString;
@property (nonatomic) {CGSize=dd} titleSize;
@property (nonatomic) NSDictionary titleAttributes;
@property (nonatomic) NSAttributedString contentAttributedString;
@property (nonatomic) {CGSize=dd} contentSize;
@property (nonatomic) NSDictionary contentAttributes;
@property (nonatomic) NSAttributedString disturbAttributedString;
@property (nonatomic) {CGSize=dd} disturbSize;
@property (nonatomic) NSDictionary disturbAttributes;
@property (nonatomic) @? moreButtonClickBlock;
- (void)setDisturbSize:;
- (id)disturbAttributedString;
- (id)disturbAttributes;
- (id)disturbSize;
- (id)getContentDict;
- (id)initWithContentDict:;
- (BOOL)isMuteByAB;
- (id)moreButtonClickBlock;
- (void)setDisturbAttributedString:;
- (void)setDisturbAttributes:;
- (void)setIsMuteByAB:;
- (void)setMoreButtonClickBlock:;
- (void)setTitleSize:;
- (void)setTitleAttributes:;
- (id)contentAttributes;
- (id)titleAttributes;
- (void)setContentAttributes:;
- (void).cxx_destruct;
- (id)contentSize;
- (void)setContentSize:;
- (id)contentAttributedString;
- (id)titleSize;
- (id)titleAttributedString;
- (void)setTitleAttributedString:;
- (void)setContentAttributedString:;
@end
