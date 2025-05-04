@interface AWEDTOAIImageExpand : MTLModel
@property (nonatomic) BOOL isAiExpaned;
@property (nonatomic) NSString origImageFilePath;
@property (nonatomic) NSString origCompressedImageFilePath;
@property (nonatomic) double origImageSizeWidth;
@property (nonatomic) double origImageSizeHeight;
@property (nonatomic) double origImageScale;
@property (nonatomic) BOOL isBackupProjectsOrigImageExpanded;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isAiExpaned;
- (void)setIsAiExpaned:;
- (id)origImageFilePath;
- (void)setOrigImageFilePath:;
- (id)origCompressedImageFilePath;
- (void)setOrigCompressedImageFilePath:;
- (double)origImageSizeWidth;
- (void)setOrigImageSizeWidth:;
- (double)origImageSizeHeight;
- (void)setOrigImageSizeHeight:;
- (double)origImageScale;
- (void)setOrigImageScale:;
- (BOOL)isBackupProjectsOrigImageExpanded;
- (void)setIsBackupProjectsOrigImageExpanded:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
