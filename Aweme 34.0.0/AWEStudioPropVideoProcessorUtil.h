@interface AWEStudioPropVideoProcessorUtil : NSObject
@property (nonatomic) AWETranslationTransitionController clipTransitionDelegate;
- (void)fillAVAssetIfNeededInAssetModel:completion:;
- (id)clipVideoPageVC:publishViewModel:croppingSize:completion:;
- (id)clipTransitionDelegate;
- (void)requestAVAssetFromiCloudWithModel:;
- (void)setClipTransitionDelegate:;
- (id)init;
- (void).cxx_destruct;
@end
