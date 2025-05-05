@interface AnnieHandleBattleBgImageParamModel : IESLiveBridgeModel
@property (nonatomic) NSString topBgImage;
@property (nonatomic) NSString bottomBgImage;
@property (nonatomic) NSString wholeBgImage;
- (id)bottomBgImage;
- (void)setBottomBgImage:;
- (void)setTopBgImage:;
- (void)setWholeBgImage:;
- (id)topBgImage;
- (id)wholeBgImage;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
@end
