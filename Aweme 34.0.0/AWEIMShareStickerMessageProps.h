@interface AWEIMShareStickerMessageProps : AWEIMUIViewPresenterProps
@property (nonatomic) NSString shootSmaeBtnStr;
@property (nonatomic) NSString convID;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) AWEURLModel url;
@property (nonatomic) @? tapAction;
@property (nonatomic) @? shootSameBtnTapAction;
- (id)convID;
- (void)setConvID:;
- (void)setShootSameBtnTapAction:;
- (void)setShootSmaeBtnStr:;
- (id)shootSmaeBtnStr;
- (id)shootSameBtnTapAction;
- (void)setUrl:;
- (id)subtitle;
- (void)setSubtitle:;
- (void).cxx_destruct;
- (id)title;
- (id)url;
- (void)setTitle:;
- (id)tapAction;
- (void)setTapAction:;
@end
