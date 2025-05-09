@interface AWETeenModeAlertConfigModel : AWEBaseApiModel
@property (nonatomic) AWETeenModeAlertImageModel image;
@property (nonatomic) q windowType;
@property (nonatomic) AWETeenModeAlertContentModel content;
@property (nonatomic) NSArray contents;
@property (nonatomic) NSString titleImage;
@property (nonatomic) q contentPosition;
@property (nonatomic) UIColor contentListColor;
@property (nonatomic) AWETeenModeAlertWindowVisualStyleModel windowVisualStyle;
@property (nonatomic) NSString enterText;
@property (nonatomic) NSString exitText;
@property (nonatomic) q target;
@property (nonatomic) NSString UIID;
@property (nonatomic) q buttonType;
@property (nonatomic) AWETeenModeAlertOptContentModel optContent;
@property (nonatomic) AWETeenModeAlertAutoCloseModel autoCloseConfig;
@property (nonatomic) AWEAntiAddictPopupModel popupModel;
@property (nonatomic) NSString promotionText;
- (id)enterText;
- (void)setEnterText:;
- (id)exitText;
- (void)setExitText:;
- (id)UIID;
- (void)setUIID:;
- (id)optContent;
- (id)simpleAlertDefaultContents;
- (long long)windowType;
- (void)setWindowType:;
- (id)contentListColor;
- (void)setContentListColor:;
- (id)windowVisualStyle;
- (void)setWindowVisualStyle:;
- (void)setOptContent:;
- (id)autoCloseConfig;
- (void)setAutoCloseConfig:;
- (id)promotionText;
- (void)setPromotionText:;
- (long long)buttonType;
- (long long)target;
- (id)content;
- (id)image;
- (void)setImage:;
- (void)setContents:;
- (id)contents;
- (void)setTarget:;
- (void)setContent:;
- (void).cxx_destruct;
- (void)setButtonType:;
- (void)setTitleImage:;
- (id)titleImage;
- (long long)contentPosition;
- (void)setContentPosition:;
- (id)popupModel;
- (void)setPopupModel:;
+ (id)imageJSONTransformer;
+ (id)contentsJSONTransformer;
+ (id)contentPositionJSONTransformer;
+ (id)windowVisualStyleJSONTransformer;
+ (id)contentListColorJSONTransformer;
+ (id)targetJSONTransformer;
+ (id)buttonTypeJSONTransformer;
+ (id)optContentJSONTransformer;
+ (id)autoCloseConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)contentJSONTransformer;
@end
