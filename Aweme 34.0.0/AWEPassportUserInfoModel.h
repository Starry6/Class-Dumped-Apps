@interface AWEPassportUserInfoModel : DYAPassportResponseModel
@property (nonatomic) NHAccountUser userInfo;
@property (nonatomic) AWEPassportDeleteBlockModel blockInfo;
@property (nonatomic) NSDictionary rawData;
- (id)blockInfo;
- (void)setBlockInfo:;
- (void)setUserInfo:;
- (void)setRawData:;
- (id)userInfo;
- (void).cxx_destruct;
- (id)rawData;
+ (id)JSONKeyPathsByPropertyKey;
@end
