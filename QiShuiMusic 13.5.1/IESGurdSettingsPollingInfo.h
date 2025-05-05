@interface IESGurdSettingsPollingInfo : NSObject
@property (nonatomic) q interval;
@property (nonatomic) NSArray paramsInfosArray;
- (id)paramsInfosArray;
- (void)setParamsInfosArray:;
- (void)setInterval:;
- (void).cxx_destruct;
- (long long)interval;
+ (id)infoWithDictionary:;
@end
