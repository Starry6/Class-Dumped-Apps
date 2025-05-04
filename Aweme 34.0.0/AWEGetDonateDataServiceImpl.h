@interface AWEGetDonateDataServiceImpl : HTSService
@property (nonatomic) NSMutableDictionary businessSettingsClassDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registerParseProtocol:forParseKey:;
- (void)requestDonateDataWithScene:timingType:completion:;
- (id)businessSettingsClassDict;
- (void)setBusinessSettingsClassDict:;
- (id)sceneStringFrom:;
- (id)timingStringFrom:;
- (void).cxx_destruct;
@end
