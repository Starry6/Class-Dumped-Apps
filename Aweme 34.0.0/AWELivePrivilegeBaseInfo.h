@interface AWELivePrivilegeBaseInfo : AWEBaseApiModel
@property (nonatomic) q paidLiveType;
@property (nonatomic) Q viewRight;
@property (nonatomic) q delivery;
- (long long)paidLiveType;
- (void)setPaidLiveType:;
- (unsigned long long)viewRight;
- (void)setViewRight:;
- (long long)delivery;
- (void)setDelivery:;
+ (id)JSONKeyPathsByPropertyKey;
@end
