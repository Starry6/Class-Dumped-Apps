@interface AWELiveFeedHeaderLoadingViewFactory : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createFooterView;
- (id)createHeaderView;
- (id)createEmptyViewWithFrame:;
- (id)createFailedViewWithFrame:;
@end
