@interface HMDCrashSection : HMDCrashModel
@property (nonatomic) Q base;
@property (nonatomic) Q size;
@property (nonatomic) NSString sectionName;
- (void)updateWithDictionary:;
- (void)setBase:;
- (unsigned long long)base;
- (void).cxx_destruct;
- (void)setSize:;
- (unsigned long long)size;
- (id)sectionName;
- (void)setSectionName:;
@end
