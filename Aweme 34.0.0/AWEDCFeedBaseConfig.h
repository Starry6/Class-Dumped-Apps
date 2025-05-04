@interface AWEDCFeedBaseConfig : NSObject
@property (nonatomic) NSDictionary propertyDict;
- (void)setupDefaultConfig;
- (id)identifierAndPropertyName;
- (void)updateProperty:withPropertyName:value:;
- (void)updateConfigWithDictionary:;
- (void)updateConfigWithBizTag:;
- (id)init;
- (void).cxx_destruct;
- (void)setPropertyDict:;
- (id)propertyDict;
+ (id)defaultConfig;
@end
