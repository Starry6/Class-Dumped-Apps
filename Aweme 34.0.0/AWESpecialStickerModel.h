@interface AWESpecialStickerModel : AWEBaseApiModel
@property (nonatomic) NSString stickerID;
@property (nonatomic) q stickerType;
@property (nonatomic) NSString webURL;
@property (nonatomic) NSString title;
@property (nonatomic) AWEURLModel iconURL;
@property (nonatomic) NSString openURL;
@property (nonatomic) NSString complianceData;
- (void)setStickerType:;
- (void)setOpenURL:;
- (void)setComplianceData:;
- (void)setStickerID:;
- (id)complianceData;
- (id)stickerID;
- (void)setIconURL:;
- (id)iconURL;
- (void)setWebURL:;
- (void).cxx_destruct;
- (id)title;
- (id)webURL;
- (void)setTitle:;
- (id)openURL;
- (long long)stickerType;
+ (id)iconURLJSONTransformer;
+ (id)stickerTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
