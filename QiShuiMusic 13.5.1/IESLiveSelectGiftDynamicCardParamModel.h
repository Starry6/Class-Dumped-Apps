@interface IESLiveSelectGiftDynamicCardParamModel : IESLiveBridgeModel
@property (nonatomic) NSNumber cardType;
@property (nonatomic) NSDictionary cardInfo;
@property (nonatomic) BOOL keepOperationLevel;
@property (nonatomic) NSDictionary extraParams;
- (void)setExtraParams:;
- (id)extraParams;
- (BOOL)keepOperationLevel;
- (void)setKeepOperationLevel:;
- (void).cxx_destruct;
- (id)cardType;
- (void)setCardType:;
- (id)cardInfo;
- (void)setCardInfo:;
+ (id)modelCustomPropertyMapper;
@end
