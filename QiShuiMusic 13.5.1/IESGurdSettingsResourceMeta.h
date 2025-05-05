@interface IESGurdSettingsResourceMeta : NSObject
@property (nonatomic) NSDictionary accessKeyMetaDictionary;
@property (nonatomic) IESGurdSettingsResourceBaseConfig appConfig;
@property (nonatomic) NSArray allAccessKeys;
- (id)accessKeyMetaDictionary;
- (id)allAccessKeys;
- (void)setAccessKeyMetaDictionary:;
- (void)setAppConfig:;
- (id)objectForKeyedSubscript:;
- (void).cxx_destruct;
- (id)appConfig;
+ (id)metaWithDictionary:;
@end
