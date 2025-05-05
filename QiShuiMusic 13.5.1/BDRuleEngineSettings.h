@interface BDRuleEngineSettings : NSObject
+ (BOOL)enableAppLog;
+ (BOOL)enableBlackWhite;
+ (BOOL)enableFFFTrie;
+ (BOOL)enableInstructionList;
+ (BOOL)enableOptimizeKVStore;
+ (BOOL)enablePrecacheCel;
+ (BOOL)enableQuickExecutor;
+ (BOOL)enableRuleEngine;
+ (unsigned long long)expressionCacheSize;
+ (id)globalSampleRate;
+ (unsigned long long)localLogLevel;
+ (id)spaceConfig;
+ (id)spaceConfigForSource:;
+ (id)config;
+ (id)setting;
@end
