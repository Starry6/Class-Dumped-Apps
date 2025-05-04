@interface AWEVideoHallSendCouponResponseModel : AWEBaseApiModel
@property (nonatomic) BOOL success;
@property (nonatomic) q couponShowType;
@property (nonatomic) q failCode;
@property (nonatomic) AWEVideoHallPopupInfoModel popupInfo;
@property (nonatomic) NSString toastText;
@property (nonatomic) NSString couponMetaNo;
- (id)toastText;
- (void)setToastText:;
- (id)popupInfo;
- (void)setPopupInfo:;
- (long long)failCode;
- (void)setFailCode:;
- (id)couponMetaNo;
- (void)setCouponMetaNo:;
- (long long)couponShowType;
- (void)setCouponShowType:;
- (void)setSuccess:;
- (void).cxx_destruct;
- (BOOL)success;
+ (id)popupInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
