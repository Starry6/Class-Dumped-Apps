@interface AWEDetailWelfareSectionController : IGListSectionController
@property (nonatomic) AWEDetailWelfareModel object;
@property (nonatomic) double cellHeight;
@property (nonatomic) AWEDetailWelfareView welfareView;
@property (nonatomic) IESServiceProvider provider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cellForItemAtIndex:;
- (void)didUpdateToObject:;
- (id)welfareView;
- (void)setWelfareView:;
- (void)welfareView:didUpdateHeightTo:;
- (void)dealloc;
- (void)setProvider:;
- (id)object;
- (void).cxx_destruct;
- (id)provider;
- (id)initWithServiceProvider:;
- (void)setObject:;
- (id)inset;
- (double)cellHeight;
- (void)setCellHeight:;
- (id)sizeForItemAtIndex:;
@end
