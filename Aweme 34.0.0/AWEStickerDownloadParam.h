@interface AWEStickerDownloadParam : NSObject
@property (nonatomic) IESEffectModel effectModel;
@property (nonatomic) @? progressBlock;
@property (nonatomic) @? completionBlock;
@property (nonatomic) @? didFirstAddListBlock;
- (id)effectModel;
- (void)setEffectModel:;
- (void)setDidFirstAddListBlock:;
- (id)didFirstAddListBlock;
- (id)progressBlock;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (void)setProgressBlock:;
- (void).cxx_destruct;
@end
