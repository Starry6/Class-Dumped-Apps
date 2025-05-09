@interface AWEIMFacePuzzleContentProps : AWEIMUIViewPresenterProps
@property (nonatomic) UIImage bgImage;
@property (nonatomic) UIImage topImage;
@property (nonatomic) NSAttributedString title;
@property (nonatomic) NSAttributedString subTitle;
@property (nonatomic) NSAttributedString statusDes;
@property (nonatomic) NSAttributedString qtitle;
@property (nonatomic) BOOL isAnswer;
@property (nonatomic) BOOL isQuoteReply;
@property (nonatomic) BOOL hasBgImage;
@property (nonatomic) {CGSize=dd} avatarSize;
@property (nonatomic) @? tapAction;
@property (nonatomic) UIColor btnColor;
- (BOOL)hasBgImage;
- (void)setHasBgImage:;
- (void)setIsAnswer:;
- (void)setIsQuoteReply:;
- (void)setStatusDes:;
- (void)setBtnColor:;
- (id)statusDes;
- (id)qtitle;
- (void)setQtitle:;
- (BOOL)isAnswer;
- (BOOL)isQuoteReply;
- (id)btnColor;
- (void)setSubTitle:;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)avatarSize;
- (void)setAvatarSize:;
- (id)tapAction;
- (void)setTapAction:;
- (void)setTopImage:;
- (id)topImage;
- (id)bgImage;
- (void)setBgImage:;
@end
