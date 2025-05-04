@interface AWEHotSearchCommentContentInfoModel : NSObject
@property (nonatomic) NSAttributedString contentAttrString;
@property (nonatomic) YYTextLayout contentLayout;
@property (nonatomic) NSAttributedString fullTextBtnAttrString;
@property (nonatomic) {CGSize=dd} imageSize;
@property (nonatomic) {CGSize=dd} stickerSize;
@property (nonatomic) NSArray imageURLList;
@property (nonatomic) NSArray stickerURLList;
- (id)imageURLList;
- (void)setImageURLList:;
- (id)contentAttrString;
- (id)fullTextBtnAttrString;
- (id)stickerURLList;
- (void)setStickerURLList:;
- (void)setContentAttrString:;
- (void)setFullTextBtnAttrString:;
- (void)setStickerSize:;
- (id)contentLayout;
- (void).cxx_destruct;
- (void)setImageSize:;
- (id)imageSize;
- (void)setContentLayout:;
- (id)stickerSize;
@end
