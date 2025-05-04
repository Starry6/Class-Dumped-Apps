@interface AWEPlayletPopupResponseModel : AWEBaseApiModel
@property (nonatomic) AWEPlayletPopupInfoModel popupInfo;
- (id)popupInfo;
- (void)setPopupInfo:;
- (void).cxx_destruct;
+ (id)popupInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
