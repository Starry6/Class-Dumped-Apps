@interface IESECShopFollowRes : IESECBaseApiModel
@property (nonatomic) NSString showMsg;
@property (nonatomic) NSDictionary followGift;
@property (nonatomic) IESECRelationActivityDynamicComponentModel module;
- (id)showMsg;
- (id)followGift;
- (void)setFollowGift:;
- (void)setShowMsg:;
- (id)module;
- (void).cxx_destruct;
- (void)setModule:;
+ (id)JSONKeyPathsByPropertyKey;
@end
