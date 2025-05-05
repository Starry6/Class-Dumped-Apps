@interface WechatShareUrlCheckConfigRecord : NSObject
@property (nonatomic) Q lastReqTimeStamp;
@property (nonatomic) WechatShareUrlCheckConfig config;
- (id)genDictionaryToSave;
- (id)initWithParamDictionary:;
- (unsigned long long)lastReqTimeStamp;
- (void)setLastReqTimeStamp:;
- (void)setConfig:;
- (void).cxx_destruct;
- (id)config;
@end
