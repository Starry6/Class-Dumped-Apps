@interface AWEIMGroupChatSharePanelDataSource : NSObject
@property (nonatomic) RxCollectionViewDiffableDataSource configDataSource;
@property (nonatomic) NSArray potentialSections;
@property (nonatomic) RxCollectionViewDiffableDataSource internal;
@property (nonatomic) <IESIMGroupChatSharePanelDataSourceModelProtocol> model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__createComponents;
- (id)configDataSource;
- (void)renderModel:;
- (id)potentialSections;
- (void)__prepareComponents;
- (void)__prepareTranspondShareModels;
- (void)__prepareConfigCollectionViewData;
- (void)setPotentialSections:;
- (id)internal;
- (id)model;
- (void).cxx_destruct;
- (id)preferredContentSize;
@end
