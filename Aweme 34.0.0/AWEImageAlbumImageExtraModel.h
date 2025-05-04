@interface AWEImageAlbumImageExtraModel : AWEBaseApiModel
@property (nonatomic) NSString cardScheme;
@property (nonatomic) NSString cardDataString;
@property (nonatomic) NSArray cardBackupImageURLList;
@property (nonatomic) AWEImageAlbumImageNavigatorInfo navigatorInfo;
@property (nonatomic) UIColor fontColor;
- (id)cardBackupImageURLList;
- (id)cardDataString;
- (id)cardScheme;
- (void)setCardScheme:;
- (void)setCardDataString:;
- (void)setCardBackupImageURLList:;
- (id)navigatorInfo;
- (void)setNavigatorInfo:;
- (void).cxx_destruct;
- (id)fontColor;
- (void)setFontColor:;
+ (id)navigatorInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
