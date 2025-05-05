@interface IESECWinHeaderResponse : IESECBaseApiModel
@property (nonatomic) IESECWinMixFullItem inventories;
@property (nonatomic) IESECWinHeaderBFFModel headerBFFModel;
- (void)setInventories:;
- (id)headerBFFModel;
- (id)inventories;
- (void)setHeaderBFFModel:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
