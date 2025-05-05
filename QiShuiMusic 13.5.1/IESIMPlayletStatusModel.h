@interface IESIMPlayletStatusModel : IESIMBaseApiModel
@property (nonatomic) q status;
@property (nonatomic) BOOL isCollected;
@property (nonatomic) NSString statusDesc;
- (void)setIsCollected:;
- (BOOL)isCollected;
- (void)setStatusDesc:;
- (id)statusDesc;
- (void)setStatus:;
- (void).cxx_destruct;
- (long long)status;
+ (id)JSONKeyPathsByPropertyKey;
@end
