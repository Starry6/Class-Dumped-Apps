@interface AWELivePayWallPingRsp : NSObject
@property (nonatomic) q retType;
@property (nonatomic) q duration;
@property (nonatomic) NSInteger delivery;
@property (nonatomic) BOOL needDeliveryNotice;
- (long long)retType;
- (void)setRetType:;
- (BOOL)needDeliveryNotice;
- (void)setNeedDeliveryNotice:;
- (void)setDuration:;
- (long long)duration;
- (int)delivery;
- (void)setDelivery:;
@end
