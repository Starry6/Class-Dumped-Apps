@interface AWETheaterLynxSectionController : AWEBaseListSectionController
@property (nonatomic) AWETheaterPageContext context;
@property (nonatomic) AWETheaterTracker tracker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didBindSectionViewModel;
- (void)didSelectItemAtIndex:model:;
- (id)init;
- (id)tracker;
- (void)setTracker:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)inset;
@end
