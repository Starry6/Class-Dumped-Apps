@interface IESLiveSaaSDialogModel : BDDynamicModel
@property (nonatomic) q dialogType;
@property (nonatomic) UIView contentView;
@property (nonatomic) NSString title;
@property (nonatomic) NSString detailContent;
@property (nonatomic) NSArray images;
@property (nonatomic) UIImage image;
@property (nonatomic) UIImage placeHolder;
@property (nonatomic) NSArray actionList;
@property (nonatomic) BOOL isVertical;
@property (nonatomic) BOOL canDismissByTouchOutside;
@property (nonatomic) BOOL hasCloseButton;
@property (nonatomic) @? closeBtnActionBlock;
- (id)closeBtnActionBlock;
- (void)setCloseBtnActionBlock:;
- (void).cxx_destruct;
- (id)initWithType:;
- (long long)dialogType;
- (void)setDialogType:;
@end
