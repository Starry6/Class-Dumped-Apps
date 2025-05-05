@interface CoreDAVMkcolResponseItem : CoreDAVItem
@property (nonatomic) NSMutableSet propStats;
- (id)init;
- (void)setPropStats:;
- (void).cxx_destruct;
- (BOOL)hasPropertyError;
- (void)addPropStat:;
- (id)description;
- (id)propStats;
+ (id)copyParseRules;
@end
