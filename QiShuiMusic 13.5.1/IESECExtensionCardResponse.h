@interface IESECExtensionCardResponse : IESECBaseApiModel
@property (nonatomic) NSArray mixFullCards;
@property (nonatomic) IESECWinExtensionControlnfo controlInfo;
- (void)setControlInfo:;
- (id)controlInfo;
- (id)mixFullCards;
- (void)setMixFullCards:;
- (void).cxx_destruct;
+ (id)mixFullCardsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
