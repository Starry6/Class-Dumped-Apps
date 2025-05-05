@interface WechatShareUrlCheckRule : NSObject
@property (nonatomic) NSString host;
@property (nonatomic) NSArray mustQueryKeys;
- (id)genDictionaryToSave;
- (id)initWithParamDictionary:;
- (id)mustQueryKeys;
- (void)setMustQueryKeys:;
- (id)host;
- (void)setHost:;
- (void).cxx_destruct;
@end
