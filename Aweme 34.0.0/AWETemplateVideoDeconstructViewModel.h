@interface AWETemplateVideoDeconstructViewModel : AWETemplateBaseViewModel
@property (nonatomic) NSArray gsEntities;
@property (nonatomic) AWESearchVideoDeconstructEntity firstEntity;
- (id)currentAweme;
- (void)setGsEntities:;
- (void)trackForTemplateViewShow;
- (void)trackForTemplateViewClick;
- (void)viewTransfer;
- (id)paramsForTemplateViewShow;
- (id)paramsForTemplateViewClick;
- (id)gsEntities;
- (void).cxx_destruct;
- (void)setFirstEntity:;
- (id)firstEntity;
- (id)interactionContext;
+ (BOOL)shouldActiveWithData:scene:context:;
@end
