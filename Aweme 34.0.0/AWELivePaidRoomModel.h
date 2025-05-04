@interface AWELivePaidRoomModel : AWEBaseApiModel
@property (nonatomic) q paidLiveType;
@property (nonatomic) q viewRight;
@property (nonatomic) q delivery;
- (long long)paidLiveType;
- (void)setPaidLiveType:;
- (long long)viewRight;
- (void)setViewRight:;
- (long long)delivery;
- (void)setDelivery:;
+ (id)JSONKeyPathsByPropertyKey;
@end
