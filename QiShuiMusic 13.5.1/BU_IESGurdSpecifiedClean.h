@interface BU_IESGurdSpecifiedClean : NSObject
@property (nonatomic) q cleanType;
@property (nonatomic) NSString channel;
@property (nonatomic) NSArray versions;
- (long long)cleanType;
- (void)setCleanType:;
- (BOOL)shouldCleanWithVersion:;
- (void)setChannel:;
- (id)channel;
- (void).cxx_destruct;
- (id)description;
- (id)versions;
- (void)setVersions:;
+ (id)cleanWithDictionary:;
@end
