@interface AWEMVChannelAllBigLayout : NSObject
@property (nonatomic) AWEDCFeedPageContext context;
@property (nonatomic) UIViewController<AWEDCFeedListViewControllerProtocol> container;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getMVPageContext;
- (id)createSectionViewModels:requestInfo:otherInfo:;
- (id)createSkeletonSectionViewModels;
- (void)setContainer:;
- (id)container;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
