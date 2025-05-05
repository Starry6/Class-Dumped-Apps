@interface IESECLynxCardManager : NSObject
+ (void)appendPrefixList:withAccessKey:;
+ (void)registerAccessKey:appendPrefixList:;
+ (void)registerAccessKey:withPrefixList:;
@end
