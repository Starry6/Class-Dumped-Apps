@interface AWEMessageReachNativeDialogDataModel : MTLModel
@property (nonatomic) q style;
@property (nonatomic) q iconType;
@property (nonatomic) UIImage iconPlaceHolder;
@property (nonatomic) NSString iconUrl;
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) BOOL disableClickMask;
@property (nonatomic) q closeIconStyle;
@property (nonatomic) q dragDismiss;
@property (nonatomic) BOOL pauseFeedPlay;
@property (nonatomic) NSArray buttons;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)iconUrl;
- (void)setIconUrl:;
- (void)setIconPlaceHolder:;
- (BOOL)isEqualDataModel:;
- (id)iconPlaceHolder;
- (long long)closeIconStyle;
- (BOOL)pauseFeedPlay;
- (long long)dragDismiss;
- (BOOL)disableClickMask;
- (void)setDisableClickMask:;
- (void)setCloseIconStyle:;
- (void)setDragDismiss:;
- (void)setPauseFeedPlay:;
- (BOOL)isValidWithError:;
- (id)content;
- (void)setButtons:;
- (id)buttons;
- (long long)style;
- (void)setContent:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setStyle:;
- (long long)iconType;
- (void)setIconType:;
+ (id)buttonsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
