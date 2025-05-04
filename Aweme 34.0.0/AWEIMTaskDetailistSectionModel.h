@interface AWEIMTaskDetailistSectionModel : NSObject
@property (nonatomic) AWEIMTaskDetailistSectionDefaultHeaderModel headerModel;
@property (nonatomic) NSArray cellModels;
@property (nonatomic) AWEIMTaskDetailistSectionFooterModel footerModel;
- (void)setCellModels:;
- (id)cellModels;
- (id)footerModel;
- (void)setFooterModel:;
- (void).cxx_destruct;
- (void)setHeaderModel:;
- (id)headerModel;
@end
