@interface IESECWinTabLayoutService : NSObject
@property (nonatomic) IESECServiceProxy<IESECWinDataService> dataService;
@property (nonatomic) Q layout;
@property (nonatomic) NSDictionary layoutStyles;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataService:;
- (void)switchTabLayout;
- (id)dataService;
- (unsigned long long)getLayout;
- (id)layoutStyles;
- (void)setLayoutStyles:;
- (unsigned long long)setTabLayout;
- (BOOL)shouldUpdateCellSpanSizeWithItemType:lynxModifiable:;
- (void)updateSpanSizeWithItemDataModel:sectionColumn:lynxConfig:;
- (void)updateTabLayout:;
- (void)setLayout:;
- (unsigned long long)layout;
- (id)initWithContext:;
- (void).cxx_destruct;
@end
