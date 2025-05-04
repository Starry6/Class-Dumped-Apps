@interface AWEWatchLaterDiversionInfo : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString iconUrl;
@property (nonatomic) NSString openUrl;
@property (nonatomic) BOOL enableShown;
- (id)iconUrl;
- (void)setIconUrl:;
- (id)openUrl;
- (void)setOpenUrl:;
- (BOOL)enableShown;
- (void)setEnableShown:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)copyWithZone:;
+ (id)JSONKeyPathsByPropertyKey;
@end
