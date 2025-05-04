@interface AWEFansListQuickAccessSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) NSDictionary quickAccessInfo;
@property (nonatomic) double lynxViewHeight;
- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void)setQuickAccessInfo:;
- (id)quickAccessInfo;
- (double)lynxViewHeight;
- (void)setLynxViewHeight:;
- (void).cxx_destruct;
@end
