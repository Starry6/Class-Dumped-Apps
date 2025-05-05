@interface HMDCrashStorage : HMDCrashModel
@property (nonatomic) Q free;
@property (nonatomic) Q total;
- (void)setFree:;
- (void)updateWithDictionary:;
- (unsigned long long)free;
- (unsigned long long)total;
- (void)setTotal:;
@end
