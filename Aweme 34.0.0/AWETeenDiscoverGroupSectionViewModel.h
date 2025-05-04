@interface AWETeenDiscoverGroupSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) {UIEdgeInsets=dddd} inset;
@property (nonatomic) AWETeenDiscoverChannelContext context;
- (void)replaceWithResourceList:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)inset;
- (void)setInset:;
+ (BOOL)canShowWithResourceList:;
+ (id)viewModel;
@end
