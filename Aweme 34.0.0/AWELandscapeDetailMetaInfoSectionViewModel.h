@interface AWELandscapeDetailMetaInfoSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) BOOL isExpanded;
- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void)setIsExpanded:;
- (BOOL)isExpanded;
@end
