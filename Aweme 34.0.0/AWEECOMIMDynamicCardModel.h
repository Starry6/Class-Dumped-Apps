@interface AWEECOMIMDynamicCardModel : NSObject
@property (nonatomic) AWEECOMIMDynamicCardUtil cardUtil;
@property (nonatomic) AWEECOMIMDynamicCardModelState state;
@property (nonatomic) NSString uniqueId;
@property (nonatomic) NSString techType;
@property (nonatomic) BOOL enableClientBff;
@property (nonatomic) NSString url;
@property (nonatomic) NSDictionary rawDataDict;
@property (nonatomic) NSDictionary renderDataDict;
- (void)setRawDataDict:;
- (id)rawDataDict;
- (void)setCardUtil:;
- (id)cardUtil;
- (id)techType;
- (void)setTechType:;
- (BOOL)enableClientBff;
- (void)setEnableClientBff:;
- (void)setRenderDataDict:;
- (id)initWithCardUtil:;
- (void)handleRawDataWithCompletion:;
- (id)renderDataDict;
- (void)setUrl:;
- (id)state;
- (void)setUniqueId:;
- (id)uniqueId;
- (void).cxx_destruct;
- (id)url;
- (void)setState:;
@end
