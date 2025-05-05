@interface IESGurdSettingsRequestInfo : NSObject
@property (nonatomic) q delay;
@property (nonatomic) NSArray paramsInfosArray;
- (id)paramsInfosArray;
- (void)setParamsInfosArray:;
- (long long)delay;
- (void)setDelay:;
- (void).cxx_destruct;
+ (id)infoWithDictionary:;
@end
