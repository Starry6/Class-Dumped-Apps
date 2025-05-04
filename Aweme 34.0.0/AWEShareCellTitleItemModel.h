@interface AWEShareCellTitleItemModel : NSObject
@property (nonatomic) UIImage closeButtonImage;
@property (nonatomic) NSAttributedString attributeTitle;
@property (nonatomic) NSAttributedString attributeSubTitle;
@property (nonatomic) double titleLeading;
@property (nonatomic) double titleTopMargin;
@property (nonatomic) BOOL disabledTitleClick;
@property (nonatomic) @? closeImageClickCallback;
@property (nonatomic) @? titleClickCallback;
- (id)closeButtonImage;
- (void)setCloseButtonImage:;
- (void)setTitleTopMargin:;
- (id)attributeTitle;
- (void)setAttributeTitle:;
- (id)titleClickCallback;
- (void)setTitleClickCallback:;
- (id)attributeSubTitle;
- (void)setAttributeSubTitle:;
- (double)titleLeading;
- (void)setTitleLeading:;
- (BOOL)disabledTitleClick;
- (void)setDisabledTitleClick:;
- (id)closeImageClickCallback;
- (void)setCloseImageClickCallback:;
- (void).cxx_destruct;
- (double)titleTopMargin;
@end
