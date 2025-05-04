@interface AWEIMTRVListSelectSectionModel : NSObject
@property (nonatomic) NSArray cellModels;
@property (nonatomic) NSString sectionTitle;
@property (nonatomic) NSString sectionIndicatorTitle;
- (void)setCellModels:;
- (id)cellModels;
- (id)sectionIndicatorTitle;
- (void)setSectionIndicatorTitle:;
- (void).cxx_destruct;
- (id)sectionTitle;
- (void)setSectionTitle:;
+ (id)sectionModelWithCellModels:sectionTitle:sectionIndicatorTitle:;
+ (id)sectionModelWithCellModels:sectionTitle:;
@end
