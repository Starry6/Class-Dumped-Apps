@interface AWEMVEnterEditPageOutputModel : NSObject
@property (nonatomic) NSArray selectedAssetNames;
@property (nonatomic) NSString templateModelId;
@property (nonatomic) NSArray selectedAssets;
@property (nonatomic) double generateBeginTime;
- (void)setTemplateModelId:;
- (void)setSelectedAssets:;
- (void)setGenerateBeginTime:;
- (void)setSelectedAssetNames:;
- (double)generateBeginTime;
- (id)selectedAssetNames;
- (id)templateModelId;
- (void).cxx_destruct;
- (id)selectedAssets;
@end
