@interface TSPKBinaryInfo : NSObject
@property (nonatomic) NSArray machInfos;
- (BOOL)fixSortedRules:;
- (BOOL)isRulesAllFixed:;
- (id)machInfos;
- (void)setMachInfos:;
- (unsigned long long)slideOfMachName:;
- (id)textRangeForHeader:;
- (id)init;
- (void)setup;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
