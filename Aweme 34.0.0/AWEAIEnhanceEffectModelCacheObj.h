@interface AWEAIEnhanceEffectModelCacheObj : NSObject
@property (nonatomic) IESEffectModel effectModel;
@property (nonatomic) BOOL isDownloaded;
@property (nonatomic) NSError error;
- (id)effectModel;
- (void)setEffectModel:;
- (void)setError:;
- (void).cxx_destruct;
- (id)error;
- (BOOL)isDownloaded;
- (void)setIsDownloaded:;
@end
