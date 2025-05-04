@interface AWEOfficialSubCategoryDetailListCellModel : NSObject
@property (nonatomic) NSString cellIdentifier;
@property (nonatomic) AWEIMNoticeSubCategoryModel model;
@property (nonatomic) AWEIMNoticeSubCategoryContext context;
- (id)initWithCellIdentifier:model:context:;
- (void)setCellIdentifier:;
- (void)setModel:;
- (id)model;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)cellIdentifier;
@end
