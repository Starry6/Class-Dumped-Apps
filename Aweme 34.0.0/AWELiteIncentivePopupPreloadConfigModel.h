@interface AWELiteIncentivePopupPreloadConfigModel : AWELiteBaseApiModel
@property (nonatomic) NSString popupPath;
@property (nonatomic) NSString schema;
@property (nonatomic) double expireTime;
@property (nonatomic) q taskFinishStatus;
- (id)popupPath;
- (void)setPopupPath:;
- (long long)taskFinishStatus;
- (void)setTaskFinishStatus:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (double)expireTime;
- (void)setExpireTime:;
+ (id)JSONKeyPathsByPropertyKey;
@end
