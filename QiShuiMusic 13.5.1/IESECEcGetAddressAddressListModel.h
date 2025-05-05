@interface IESECEcGetAddressAddressListModel : IESLiveBridgeModel
@property (nonatomic) NSDictionary address;
@property (nonatomic) NSDictionary latestAddress;
@property (nonatomic) NSNumber addressType;
@property (nonatomic) BOOL isMainPage;
@property (nonatomic) NSString bizCode;
- (id)bizCode;
- (BOOL)isMainPage;
- (id)latestAddress;
- (void)setBizCode:;
- (void)setIsMainPage:;
- (void)setLatestAddress:;
- (void)setAddress:;
- (void).cxx_destruct;
- (id)address;
- (id)addressType;
- (void)setAddressType:;
+ (id)modelCustomPropertyMapper;
@end
