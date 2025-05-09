@interface AWEPlayInteractionDislikeBottomBubbleConfig : NSObject
@property (nonatomic) NSString toast;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) UIViewController targetVC;
@property (nonatomic) double autoDismissTime;
@property (nonatomic) Q buttonType;
@property (nonatomic) NSString buttonText;
@property (nonatomic) NSString buttonActionSchema;
@property (nonatomic) BOOL dismissWhenClick;
@property (nonatomic) {UIEdgeInsets=dddd} enlargeInsets;
@property (nonatomic) UIImage leftImage;
@property (nonatomic) @? clickedBlock;
@property (nonatomic) @? dismissBlock;
- (id)awemeModel;
- (void)setAwemeModel:;
- (double)autoDismissTime;
- (void)setAutoDismissTime:;
- (id)targetVC;
- (void)setTargetVC:;
- (id)clickedBlock;
- (void)setClickedBlock:;
- (id)buttonActionSchema;
- (void)setButtonActionSchema:;
- (BOOL)dismissWhenClick;
- (void)setDismissWhenClick:;
- (id)enlargeInsets;
- (void)setEnlargeInsets:;
- (unsigned long long)buttonType;
- (id)buttonText;
- (void).cxx_destruct;
- (void)setButtonType:;
- (void)setButtonText:;
- (id)leftImage;
- (void)setLeftImage:;
- (void)setToast:;
- (id)toast;
- (id)dismissBlock;
- (void)setDismissBlock:;
@end
