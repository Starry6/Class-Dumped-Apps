@interface IESECShopGoodsStatusInfo : MTLModel
@property (nonatomic) Q statusType;
@property (nonatomic) IESECURLModel statusIcon;
@property (nonatomic) NSString statusText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStatusIcon:;
- (id)statusIcon;
- (id)statusText;
- (unsigned long long)statusType;
- (void).cxx_destruct;
- (void)setStatusType:;
- (void)setStatusText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
