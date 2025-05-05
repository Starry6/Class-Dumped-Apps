@interface IESLiveGiftAlgorithmDownloader : NSObject
@property (nonatomic) BOOL enableCheckLokiModel;
- (void)downloadEPModelWithAsset:completion:;
- (BOOL)enableCheckLokiModel;
- (BOOL)isRequirementsAndModelsReady:;
- (void)setEnableCheckLokiModel:;
- (id)init;
@end
