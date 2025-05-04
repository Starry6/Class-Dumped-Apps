@interface AWEEnterpriseCompanyNameEditConfiguration : NSObject
@property (nonatomic) @? viewForSupplementaryElementRefreshBlock;
@property (nonatomic) @? referenceSizeForHeaderBlock;
@property (nonatomic) @? checkAuditSwitch;
@property (nonatomic) @? startPickImageBlock;
@property (nonatomic) @? imageCountChangeBlock;
@property (nonatomic) double kPadding;
@property (nonatomic) q kMaxUploadImageCount;
- (id)viewForSupplementaryElementRefreshBlock;
- (void)setViewForSupplementaryElementRefreshBlock:;
- (id)referenceSizeForHeaderBlock;
- (void)setReferenceSizeForHeaderBlock:;
- (id)checkAuditSwitch;
- (void)setCheckAuditSwitch:;
- (id)startPickImageBlock;
- (void)setStartPickImageBlock:;
- (id)imageCountChangeBlock;
- (void)setImageCountChangeBlock:;
- (double)kPadding;
- (void)setKPadding:;
- (long long)kMaxUploadImageCount;
- (void)setKMaxUploadImageCount:;
- (void).cxx_destruct;
@end
