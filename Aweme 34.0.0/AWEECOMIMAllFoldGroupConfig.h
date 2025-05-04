@interface AWEECOMIMAllFoldGroupConfig : NSObject
@property (nonatomic) NSDictionary foldGroupConfigMap;
@property (nonatomic) AWEECOMIMFoldGroupConfig foldGroupDefaultConfig;
- (void)setFoldGroupDefaultConfig:;
- (void)setFoldGroupConfigMap:;
- (id)foldGroupConfigMap;
- (id)foldGroupDefaultConfig;
- (void).cxx_destruct;
- (id)initWithDictionary:;
@end
