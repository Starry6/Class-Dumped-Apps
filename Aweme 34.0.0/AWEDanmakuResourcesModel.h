@interface AWEDanmakuResourcesModel : NSObject
@property (nonatomic) NSArray downloadModels;
@property (nonatomic) NSArray deleteModels;
- (id)deleteModels;
- (id)downloadModels;
- (id)initWithDownloadModels:deleteModels:;
- (void)setDownloadModels:;
- (void)setDeleteModels:;
- (void).cxx_destruct;
@end
