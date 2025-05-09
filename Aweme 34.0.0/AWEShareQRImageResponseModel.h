@interface AWEShareQRImageResponseModel : AWEBaseApiModel
@property (nonatomic) NSString schema;
@property (nonatomic) NSString shareScene;
@property (nonatomic) BOOL activityEnd;
@property (nonatomic) NSDictionary activityInfo;
@property (nonatomic) NSString confirmButtonText;
@property (nonatomic) NSString subtitle;
@property (nonatomic) BOOL hidePopup;
@property (nonatomic) NSString popupCover;
@property (nonatomic) AWEShareUserModel shareUserInfo;
@property (nonatomic) NSString reflowFailToast;
- (void)setActivityInfo:;
- (id)reflowFailToast;
- (id)shareScene;
- (void)setShareScene:;
- (id)popupCover;
- (void)setPopupCover:;
- (BOOL)hidePopup;
- (void)setHidePopup:;
- (void)setConfirmButtonText:;
- (void)setReflowFailToast:;
- (BOOL)activityEnd;
- (void)setActivityEnd:;
- (id)shareUserInfo;
- (void)setShareUserInfo:;
- (id)schema;
- (void)setSchema:;
- (id)subtitle;
- (void)setSubtitle:;
- (void).cxx_destruct;
- (id)confirmButtonText;
- (id)activityInfo;
+ (id)activityInfoJSONTransformer;
+ (id)shareUserInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
