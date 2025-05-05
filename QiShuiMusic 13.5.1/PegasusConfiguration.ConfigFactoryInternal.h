@interface PegasusConfiguration.ConfigFactoryInternal : NSObject
- (id)init;
- (id)loadWithUrl:userAgent:userDefaults:;
- (id)loadWithData:userAgent:userDefaults:;
@end
