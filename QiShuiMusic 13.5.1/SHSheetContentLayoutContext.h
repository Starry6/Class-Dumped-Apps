@interface SHSheetContentLayoutContext : NSObject
@property (nonatomic) NSString sectionIdentifier;
@property (nonatomic) NSDiffableDataSourceSnapshot dataSourceSnapshot;
@property (nonatomic) <NSCollectionLayoutEnvironment> environment;
@property (nonatomic) {NSDirectionalEdgeInsets=dddd} viewDirectionalLayoutMargins;
@property (nonatomic) BOOL enableHeroActions;
@property (nonatomic) BOOL enableTopContentSectionText;
- (id)sectionIdentifier;
- (id)dataSourceSnapshot;
- (id)environment;
- (void).cxx_destruct;
- (id)viewDirectionalLayoutMargins;
- (id)initWithSectionIdentifier:dataSourceSnapshot:environment:;
- (void)setViewDirectionalLayoutMargins:;
- (BOOL)enableHeroActions;
- (void)setEnableHeroActions:;
- (BOOL)enableTopContentSectionText;
- (void)setEnableTopContentSectionText:;
@end
