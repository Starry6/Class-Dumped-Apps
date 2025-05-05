@interface IESLiveDialogModel : IESLiveDynamicModel
@property (nonatomic) q dialogType;
@property (nonatomic) UIView contentView;
@property (nonatomic) NSString title;
@property (nonatomic) NSString detailContent;
@property (nonatomic) NSArray images;
@property (nonatomic) UIImage image;
@property (nonatomic) UIView imageContainerView;
@property (nonatomic) UIImage placeHolder;
@property (nonatomic) NSArray actionList;
@property (nonatomic) BOOL isVertical;
@property (nonatomic) BOOL canDismissByTouchOutside;
@property (nonatomic) BOOL hasCloseButton;
@property (nonatomic) NSNumber containerRadius;
@property (nonatomic) @? closeBtnActionBlock;
- (id)containerRadius;
- (id)closeBtnActionBlock;
- (void)setCloseBtnActionBlock:;
- (void)setContainerRadius:;
- (void).cxx_destruct;
- (id)initWithType:;
- (id)imageContainerView;
- (void)setImageContainerView:;
- (long long)dialogType;
- (void)setDialogType:;
@end
