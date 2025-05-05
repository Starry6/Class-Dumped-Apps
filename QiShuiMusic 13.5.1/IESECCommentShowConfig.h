@interface IESECCommentShowConfig : NSObject
@property (nonatomic) NSString productID;
@property (nonatomic) NSString title;
@property (nonatomic) IESECGoodsDetailTracker goodsDetailTracker;
@property (nonatomic) IESECTracker tracker;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) BOOL hideHeader;
@property (nonatomic) NSString sourceBtmToken;
- (void)setTrackParams:;
- (id)goodsDetailTracker;
- (void)setGoodsDetailTracker:;
- (void)setSourceBtmToken:;
- (id)sourceBtmToken;
- (id)trackParams;
- (void)trackeEvent:extraParams:;
- (void)trackeEvent:extraParams:once:;
- (void)setTracker:;
- (id)productID;
- (void)setProductID:;
- (id)tracker;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (void)setHideHeader:;
- (BOOL)hideHeader;
@end
