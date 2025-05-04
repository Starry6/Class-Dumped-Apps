@interface AWEIMActiveUserConstantConvertUtility : NSObject
@property (nonatomic) NSDictionary enum_forceFetchSourceKey;
@property (nonatomic) NSDictionary enum_loopFetchSourceKey;
@property (nonatomic) NSDictionary fetchSourceKey_enum;
- (void)setEnum_forceFetchSourceKey:;
- (void)setEnum_loopFetchSourceKey:;
- (void)setFetchSourceKey_enum:;
- (id)enum_forceFetchSourceKey;
- (id)enum_loopFetchSourceKey;
- (id)fetchSourceKey_enum;
- (id)init;
- (void).cxx_destruct;
+ (unsigned long long)sourceTypeFromFetchSourceKey:;
+ (id)forceFetchSourceKeyFromSourceTypeEnum:;
+ (id)loopFetchSourceKeyFromSourceTypeEnum:;
+ (id)sharedInstance;
@end
