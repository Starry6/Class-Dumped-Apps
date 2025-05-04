@interface AWEDetailTrendTitleSectionController : IGListSectionController
@property (nonatomic) IESServiceProvider provider;
@property (nonatomic) AWEDetailTrendHeadTitleModel object;
@property (nonatomic) BOOL hasTrackedTagShow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cellForItemAtIndex:;
- (id)commonTrackParams;
- (void)listAdapter:willDisplaySectionController:;
- (void)listAdapter:didEndDisplayingSectionController:;
- (void)listAdapter:willDisplaySectionController:cell:atIndex:;
- (void)listAdapter:didEndDisplayingSectionController:cell:atIndex:;
- (void)didUpdateToObject:;
- (BOOL)hasTrackedTagShow;
- (void)setHasTrackedTagShow:;
- (void)setProvider:;
- (long long)numberOfItems;
- (id)object;
- (void).cxx_destruct;
- (id)provider;
- (id)initWithServiceProvider:;
- (void)setObject:;
- (id)sizeForItemAtIndex:;
@end
