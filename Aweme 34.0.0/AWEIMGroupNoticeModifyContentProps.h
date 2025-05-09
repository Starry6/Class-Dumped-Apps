@interface AWEIMGroupNoticeModifyContentProps : AWEIMUIViewPresenterProps
@property (nonatomic) @? tapAction;
@property (nonatomic) {CGSize=dd} titleSize;
@property (nonatomic) BOOL sendFromMe;
@property (nonatomic) UIColor lineBGColor;
@property (nonatomic) NSAttributedString titleText;
@property (nonatomic) UIImage iconImage;
@property (nonatomic) {CGSize=dd} ImageSize;
@property (nonatomic) UIColor imageColor;
@property (nonatomic) NSAttributedString contentText;
- (BOOL)sendFromMe;
- (void)setSendFromMe:;
- (void)setTitleSize:;
- (void)setLineBGColor:;
- (id)lineBGColor;
- (id)ImageSize;
- (id)iconImage;
- (void)setIconImage:;
- (void)setImageColor:;
- (void)setTitleText:;
- (id)titleText;
- (void).cxx_destruct;
- (void)setImageSize:;
- (id)imageColor;
- (void)setContentText:;
- (id)contentText;
- (id)titleSize;
- (id)tapAction;
- (void)setTapAction:;
@end
