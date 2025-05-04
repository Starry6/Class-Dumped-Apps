@interface AWEIMShareMutiselectViewControllerDataSourceConfig : NSObject
@property (nonatomic) AWEShareContext shareContext;
@property (nonatomic) NSArray shareModels;
@property (nonatomic) NSArray dataList;
@property (nonatomic) NSArray recentSharedInfoModels;
@property (nonatomic) NSArray recentSharedList;
- (void)setShareContext:;
- (void)setDataList:;
- (id)shareContext;
- (void)setShareModels:;
- (id)shareModels;
- (id)recentSharedInfoModels;
- (void)setRecentSharedInfoModels:;
- (id)recentSharedList;
- (void)setRecentSharedList:;
- (void).cxx_destruct;
- (id)dataList;
@end
