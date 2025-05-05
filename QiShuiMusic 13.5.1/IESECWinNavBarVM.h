@interface IESECWinNavBarVM : NSObject
@property (nonatomic) IESECWinContext context;
@property (nonatomic) UIViewController vc;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackShareClick;
- (id)searchBTMID;
- (void)setVc:;
- (void)trackCartClick;
- (void)trackImEntryClick;
- (void)trackImEntryShow;
- (void)trackMoreClick;
- (void)trackMyOrderClick;
- (void)trackMyWindowClick;
- (void)trackSearchBarClick;
- (void)trackSearchBarShow;
- (id)context;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)setContext:;
- (id)vc;
@end
