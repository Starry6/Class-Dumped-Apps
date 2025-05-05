@interface IESLiveGetDressInfoDataModel : IESLiveBridgeModel
@property (nonatomic) NSDictionary dressInfo;
@property (nonatomic) NSString dressInfoString;
- (id)dressInfoString;
- (id)dressInfo;
- (void)setDressInfo:;
- (void)setDressInfoString:;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
@end
