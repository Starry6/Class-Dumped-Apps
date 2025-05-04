@interface AWECommentEvaluationConfig : NSObject
@property (nonatomic) NSString nativeHostTitle;
@property (nonatomic) AWECommentEvaluationTitleElementConfig titleElementConfig;
@property (nonatomic) AWECommentEvaluationRatingElementConfig ratingElementConfig;
@property (nonatomic) AWECommentEvaluationContentElementConfig contentElementConfig;
@property (nonatomic) AWECommentEvaluationExpandElementConfig expandElementConfig;
@property (nonatomic) AWECommentEvaluationRichContentElementEntranceConfig richContentElementEntranceConfig;
@property (nonatomic) AWECommentEvaluationPreviewElementConfig previewElementConfig;
- (void)configWithDict:;
- (void)setNativeHostTitle:;
- (id)titleElementConfig;
- (id)expandElementConfig;
- (id)previewElementConfig;
- (id)ratingElementConfig;
- (id)contentElementConfig;
- (id)richContentElementEntranceConfig;
- (id)nativeHostTitle;
- (void)setRichContentElementEntranceConfig:;
- (void)setTitleElementConfig:;
- (void)setRatingElementConfig:;
- (void)setExpandElementConfig:;
- (void)setContentElementConfig:;
- (void)setPreviewElementConfig:;
- (void).cxx_destruct;
@end
