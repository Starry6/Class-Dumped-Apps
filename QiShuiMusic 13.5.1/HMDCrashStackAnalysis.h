@interface HMDCrashStackAnalysis : HMDCrashAddressAnalysis
@property (nonatomic) Q stack_address;
- (id)postDict;
- (void)setStack_address:;
- (unsigned long long)stack_address;
- (void)updateWithDictionary:;
+ (id)objectsWithDicts:;
@end
