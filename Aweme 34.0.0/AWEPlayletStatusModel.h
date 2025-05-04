@interface AWEPlayletStatusModel : AWEBaseApiModel
@property (nonatomic) q status;
@property (nonatomic) BOOL isCollected;
@property (nonatomic) NSString statusDesc;
- (BOOL)isCollected;
- (void)setIsCollected:;
- (id)statusDesc;
- (void)setStatusDesc:;
- (void)setStatus:;
- (void).cxx_destruct;
- (long long)status;
+ (id)JSONKeyPathsByPropertyKey;
@end
