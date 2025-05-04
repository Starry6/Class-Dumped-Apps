@interface AWEPublishTitleTemplateService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchTitleTemplateCategoriesListWithCompletion:;
- (void)fetchTitleTemplateModelListWithCategoryKey:completion:;
- (BOOL)enabled;
@end
