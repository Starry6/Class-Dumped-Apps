@interface IESECShopBffTabResponse : IESECBaseApiModel
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) NSDictionary perfLogExtra;
@property (nonatomic) IESECTabKitBFFModel tabKitModel;
- (void)setTabKitModel:;
- (id)logExtra;
- (id)perfLogExtra;
- (void)setLogExtra:;
- (void)setPerfLogExtra:;
- (id)tabKitModel;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
