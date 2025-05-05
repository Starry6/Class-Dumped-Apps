@interface CJPayOCRFileResponseModel : JSONModel
@property (nonatomic) NSString mediaType;
@property (nonatomic) NSString size;
@property (nonatomic) NSString filePath;
@property (nonatomic) NSString metaFile;
@property (nonatomic) NSString metaFilePrefix;
- (id)metaFile;
- (id)metaFilePrefix;
- (void)setMetaFile:;
- (void)setMetaFilePrefix:;
- (id)filePath;
- (id)mediaType;
- (void)setMediaType:;
- (void)setFilePath:;
- (void).cxx_destruct;
- (void)setSize:;
- (id)size;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
