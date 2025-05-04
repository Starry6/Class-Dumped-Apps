@interface AWEUserWorkCellEncouragePublishComponent_NEWAPI : AWEUserWorkCellBaseComponent
@property (nonatomic) NSString text;
@property (nonatomic) # viewClass;
@property (nonatomic) AWERLVirtualView virtualView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)trackParams;
- (id)buildVirtualView:;
- (void)setVirtualView:;
- (void)needHideEncourageTagWithModel:;
- (BOOL)dynamicComponent;
- (Class)viewClass;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
- (id)initWithData:context:;
- (id)virtualView;
- (void)setViewClass:;
+ (BOOL)canShow:;
+ (id)componentWithData:context:;
@end
