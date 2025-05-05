@interface HMDCrashRegisterAnalysis : HMDCrashAddressAnalysis
@property (nonatomic) NSString registerName;
- (id)postDict;
- (id)registerName;
- (void)setRegisterName:;
- (void)updateWithDictionary:;
- (void).cxx_destruct;
+ (id)objectsWithDicts:;
@end
