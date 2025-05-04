@interface AWEPlayletPopupInfoModel : AWEBaseApiModel
@property (nonatomic) NSString url;
@property (nonatomic) NSString infoString;
@property (nonatomic) Q popupType;
@property (nonatomic) BOOL canPopup;
- (unsigned long long)popupType;
- (void)setPopupType:;
- (void)setInfoString:;
- (BOOL)canPopup;
- (void)setCanPopup:;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)url;
- (id)infoString;
+ (id)JSONKeyPathsByPropertyKey;
@end
