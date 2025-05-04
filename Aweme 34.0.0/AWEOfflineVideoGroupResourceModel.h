@interface AWEOfflineVideoGroupResourceModel : AWEOfflineVideoResourceModel
@property (nonatomic) NSMutableArray singleResourceModels;
@property (nonatomic) Q type;
@property (nonatomic) NSArray modelList;
- (id)mixInfo;
- (id)awemeModels;
- (id)modelList;
- (void)deleteFile;
- (void)deleteInvalidVideoWithItemIDs:;
- (void)appendSubResourcesModels:;
- (void)deleteInvalidVideo;
- (id)singleResourceModels;
- (void)setSingleResourceModels:;
- (double)cacheSize;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (unsigned long long)type;
- (void)setType:;
- (double)fileSize;
- (void).cxx_destruct;
- (id)initWithType:;
- (BOOL)isEqual:;
- (id)initWithCoder:;
- (id)authorID;
@end
