@interface AWEPostPageListDataSource : NSObject
@property (nonatomic) <AWEPostPageElementCenter> center;
@property (nonatomic) NSArray sections;
@property (nonatomic) <IESServiceProvider> serviceProvider;
@property (nonatomic) <AWEPostPageListDataTemplate> template;
- (id)_buildSection:;
- (void)buildListData;
- (id)diff:new:;
- (id)sections;
- (id)center;
- (void)setCenter:;
- (void)setSections:;
- (void).cxx_destruct;
- (id)serviceProvider;
- (void)setTemplate:;
- (id)template;
- (void)setServiceProvider:;
@end
