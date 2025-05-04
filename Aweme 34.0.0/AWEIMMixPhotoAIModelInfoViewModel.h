@interface AWEIMMixPhotoAIModelInfoViewModel : AWEIMMixPhotoAIModelInfoModel
@property (nonatomic) NSDictionary loraInfo;
@property (nonatomic) BOOL needUpdate;
@property (nonatomic) Q scene;
@property (nonatomic) @? enterNextPageBlock;
- (BOOL)needUpdate;
- (void)setNeedUpdate:;
- (void)updateParams;
- (void)refreshDataIfNeed;
- (void)configData:;
- (id)loraInfo;
- (void)setLoraInfo:;
- (void)setEnterNextPageBlock:;
- (id)getTrailingImage:;
- (void)fetchLeadingImageWithURLModel:;
- (id)enterNextPageBlock;
- (void)setScene:;
- (unsigned long long)scene;
- (void).cxx_destruct;
- (id)initWithScene:;
@end
