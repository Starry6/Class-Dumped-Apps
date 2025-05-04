@interface AWEPOIPostPermissionResponseModel : AWEBaseApiModel
@property (nonatomic) NSString rawData;
@property (nonatomic) NSString defaultText;
@property (nonatomic) NSDictionary searchSpuTabInfo;
@property (nonatomic) q userType;
- (id)searchSpuTabInfo;
- (void)setSearchSpuTabInfo:;
- (long long)userType;
- (void)setRawData:;
- (void).cxx_destruct;
- (id)rawData;
- (void)setDefaultText:;
- (id)defaultText;
- (void)setUserType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
