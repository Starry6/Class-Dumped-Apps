@interface AWEPOIGoodsDetailShareCouponBubbleFrequency : NSObject
@property (nonatomic) NSString storageKey;
- (id)initWithProductId:;
- (id)storageKey;
- (void)setStorageKey:;
- (BOOL)hitFrequency;
- (void)recordFrequency;
- (id)currentDate;
- (void).cxx_destruct;
@end
