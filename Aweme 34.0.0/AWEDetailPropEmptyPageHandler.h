@interface AWEDetailPropEmptyPageHandler : NSObject
@property (nonatomic) AWEDetailPropViewModel stateContext;
@property (nonatomic) UIViewController<AWEDetailPropEmptyPageHost> host;
@property (nonatomic) AWEDetailPropEmptyView emptyView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hostViewDidLoad;
- (id)initWithHost:stateContext:;
- (void)p_showEmptyPropView;
- (void)setHost:;
- (id)host;
- (void)setStateContext:;
- (void).cxx_destruct;
- (id)stateContext;
- (id)emptyView;
- (void)setEmptyView:;
@end
