@interface AWEPOIDetailNGUGCFloatingTagsComponentViewModel : DitoComponentViewModel
@property (nonatomic) AWEPOIDetailNGPageContext context;
@property (nonatomic) AWEPOIFeedUgcHeaderModel headerModel;
@property (nonatomic) BOOL show;
@property (nonatomic) AWEPOIDetailNGUGCFloatingTagsComponentView componentView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)componentReuseIdentifier;
- (void)bindStateAndAction;
- (id)componentSizeWithMaxWidth:;
- (void)didSelectUgcTagWithModel:;
- (void)tagsComponentScrollToTop;
- (id)componentInset;
- (BOOL)show;
- (id)initWithNode:;
- (void).cxx_destruct;
- (id)componentView;
- (void)setComponentView:;
- (void)setShow:;
- (void)setHeaderModel:;
- (id)headerModel;
@end
