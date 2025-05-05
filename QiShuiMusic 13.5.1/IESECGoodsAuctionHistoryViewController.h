@interface IESECGoodsAuctionHistoryViewController : UIViewController
@property (nonatomic) IESECGoodsAuctionHistoryView content;
@property (nonatomic) <IESECGoodsDetailContainerProtocol> container;
@property (nonatomic) IESECGoodsDetailTracker tracker;
@property (nonatomic) NSString auctionID;
@property (nonatomic) NSString metaParamsStr;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)auctionID;
- (void)dismissCurrentVC;
- (void)embedInContainer:;
- (id)initWithAuctionID:metaParams:;
- (id)metaParamsStr;
- (double)popoverContentHeight;
- (void)setAuctionID:;
- (void)setMetaParamsStr:;
- (void)setTracker:;
- (id)content;
- (void)setContent:;
- (void)setContainer:;
- (id)tracker;
- (id)container;
- (void).cxx_destruct;
- (void)viewDidLoad;
@end
