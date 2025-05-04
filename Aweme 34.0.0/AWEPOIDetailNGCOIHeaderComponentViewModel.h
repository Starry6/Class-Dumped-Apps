@interface AWEPOIDetailNGCOIHeaderComponentViewModel : DitoComponentViewModel
@property (nonatomic) AWEPOIDetailNGPageContext context;
@property (nonatomic) NSString title;
- (id)poiDetail;
- (id)componentReuseIdentifier;
- (id)componentSizeWithMaxWidth:;
- (void)componentViewWillShow;
- (id)initWithNode:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
@end
