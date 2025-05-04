@interface AWEUserWorkCellUnreadLabelComponent_NEWAPI : AWEUserWorkCellBaseComponent
@property (nonatomic) {UIEdgeInsets=dddd} absoluteLayoutStyle;
@property (nonatomic) AWERLVirtualView childVirtualView;
@property (nonatomic) AWERLVirtualLabel unreadLabelVirtualView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)buildVirtualView:;
- (void)setAbsoluteLayoutStyle:;
- (id)absoluteLayoutStyle;
- (BOOL)dynamicComponent;
- (void)changeAlpha:;
- (id)childVirtualView;
- (id)unreadLabelVirtualView;
- (void)setChildVirtualView:;
- (void)setUnreadLabelVirtualView:;
- (void).cxx_destruct;
- (id)initWithData:context:;
+ (id)componentWithData:context:;
@end
