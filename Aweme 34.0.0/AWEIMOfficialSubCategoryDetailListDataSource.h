@interface AWEIMOfficialSubCategoryDetailListDataSource : NSObject
@property (nonatomic) NSArray cellModels;
@property (nonatomic) AWEIMNoticeSubCategoryContext context;
- (void)setCellModels:;
- (id)cellModels;
- (void)renderWithSubCategories:context:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
