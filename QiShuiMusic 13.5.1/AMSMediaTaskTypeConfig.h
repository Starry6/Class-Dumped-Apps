@interface AMSMediaTaskTypeConfig : NSObject
@property (nonatomic) NSString hostBagKey;
@property (nonatomic) BOOL includePlatform;
@property (nonatomic) NSString realm;
@property (nonatomic) q type;
@property (nonatomic) NSString typeString;
- (id)realm;
- (id)typeString;
- (long long)type;
- (void).cxx_destruct;
- (id)initWithType:typeString:hostBagKey:realm:includePlatform:;
- (id)hostBagKey;
- (BOOL)includePlatform;
+ (id)configForType:;
@end
