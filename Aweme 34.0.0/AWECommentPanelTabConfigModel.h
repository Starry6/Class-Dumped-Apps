@interface AWECommentPanelTabConfigModel : NSObject
@property (nonatomic) BOOL isFilterTabs;
@property (nonatomic) NSArray whiteTabList;
- (void)setWhiteTabList:;
- (id)whiteTabList;
- (BOOL)isFilterTabs;
- (void)setIsFilterTabs:;
- (id)initWithIsFilterTabs:;
- (void).cxx_destruct;
@end
