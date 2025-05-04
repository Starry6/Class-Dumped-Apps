@interface AWELivePaidLiveConfigUserRight : AWEBaseApiModel
@property (nonatomic) q viewRight;
@property (nonatomic) q duration;
@property (nonatomic) q delivery;
@property (nonatomic) BOOL needDeliveryNotice;
- (long long)viewRight;
- (void)setViewRight:;
- (BOOL)needDeliveryNotice;
- (void)setNeedDeliveryNotice:;
- (void)setDuration:;
- (long long)duration;
- (long long)delivery;
- (void)setDelivery:;
+ (id)JSONKeyPathsByPropertyKey;
@end
