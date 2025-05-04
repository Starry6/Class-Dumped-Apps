@interface AWEUserLoadingComponent : NSObject
@property (nonatomic) AWEUserLoginLoadingView loadingView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)startLoading:;
- (void)setupComponentView;
- (void)setLoadingView:;
- (void)stopLoading;
- (id)loadingView;
- (unsigned long long)componentType;
- (void).cxx_destruct;
- (id)componentView;
@end
