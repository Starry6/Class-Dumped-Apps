@interface IESLiveIAPModel : NSObject
@property (nonatomic) NSString iapId;
@property (nonatomic) NSNumber productId;
- (id)initWithIAPId:productId:;
- (id)productId;
- (void).cxx_destruct;
- (void)setProductId:;
- (void)setIapId:;
- (id)iapId;
@end
