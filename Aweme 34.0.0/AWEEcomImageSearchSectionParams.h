@interface AWEEcomImageSearchSectionParams : NSObject
@property (nonatomic) NSString searchId;
@property (nonatomic) NSString searchChannel;
@property (nonatomic) NSString searchCellLevel;
@property (nonatomic) NSString currentFormat;
@property (nonatomic) AWEEcomSearchResultLoadMoreConfig loadMoreConfig;
- (id)searchId;
- (void)setSearchId:;
- (void)setLoadMoreConfig:;
- (void)setCurrentFormat:;
- (id)loadMoreConfig;
- (id)searchChannel;
- (void)setSearchChannel:;
- (id)searchCellLevel;
- (void)setSearchCellLevel:;
- (id)initWithLoadMoreConfig:;
- (void).cxx_destruct;
- (id)currentFormat;
@end
