@interface AWEPadPolymericChannelManager : NSObject
@property (nonatomic) AWEPadListViewSectionFactory listViewSectionFactory;
@property (nonatomic) NSDictionary pageTitleMap;
- (id)buildSectionListWithRawData:pageKey:enableGrid:enableLight:;
- (id)listViewSectionFactory;
- (id)pageTitleMap;
- (id)discardedArchPageKeySet;
- (id)localBreakPointEnablePageKeyArray;
- (id)listViewSectionFactoryWithPageKey:enableGrid:;
- (BOOL)enableBreakPointWithPageKey:;
- (void)setPageTitleMap:;
- (void)setListViewSectionFactory:;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
