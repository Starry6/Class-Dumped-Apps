@interface IESLiveSaaSTagsView : UIView
@property (nonatomic) <IESLiveSaaSTagsViewDataSource> dataSource;
@property (nonatomic) IESLiveSaaSTagsLayout layout;
- (id)itemsOfTags;
- (void)reloadData;
- (void)setDataSource:;
- (void)setLayout:;
- (id)layout;
- (id)dataSource;
- (id)initWithFrame:layout:;
- (void).cxx_destruct;
@end
