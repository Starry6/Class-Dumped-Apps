@interface PETConfig : NSObject
@property (nonatomic) Q version;
@property (nonatomic) NSDictionary configDictionary;
- (BOOL)shouldUploadToFBFv2ForCarryAndSeed;
- (double)messageSamplingForMessageName:;
- (id)_groupConfigForMessageName:;
- (unsigned long long)version;
- (id)whitelistForMessageName:;
- (id)initWithDictionary:;
- (BOOL)isAggregatedForMessageName:;
- (id)nestedFieldsForMessageName:;
- (unsigned long long)sigFigsForMessageName:;
- (id)_configForMessageName:;
- (void)writeToFile:;
- (id)groupForMessageName:;
- (BOOL)shouldUploadToFBFv2;
- (void)_enumerateGroupConfigsWithBlock:;
- (void).cxx_destruct;
- (id)configDictionary;
- (id)bucketsForMessageName:;
- (id)_whitelistHelper:;
- (BOOL)isTVOSEnabledForMessageName:messageGroup:;
- (id)initWithFile:;
- (BOOL)isChinaEnabledForMessageName:messageGroup:;
- (double)deviceSamplingForMessageName:isSeed:;
- (id)_nestedFieldsHelper:;
- (unsigned long long)samplingLimitForMessageGroup:;
- (BOOL)shouldUploadToParsec;
@end
