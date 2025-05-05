@interface IESECAddressResultItem : NSObject
@property (nonatomic) NSDictionary address;
@property (nonatomic) NSDictionary latestAddress;
@property (nonatomic) q addressType;
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
- (long long)addressType;
- (void)setAddressType:;
@end
