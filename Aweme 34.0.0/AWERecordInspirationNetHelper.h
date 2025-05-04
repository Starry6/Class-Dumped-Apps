@interface AWERecordInspirationNetHelper : NSObject
@property (nonatomic) AWERecordInspirationCategoryItem categoryItem;
@property (nonatomic) BOOL requesting;
- (void)setCategoryItem:;
- (BOOL)requesting;
- (void)setRequesting:;
- (void)videoTemplateCollectWithTemplateId:templateType:completion:;
- (void)videoTemplateCancelCollectWithTemplateId:templateType:completion:;
- (void)loadInspirationCategoryTabCompletion:;
- (void)loadInspirationCollectWithQueryParams:completion:;
- (void)loadInspirationCategoryDetailWithQueryParams:completion:;
- (id)paramForEffectChannel;
- (void).cxx_destruct;
- (id)categoryItem;
@end
