@interface BU_IESGurdUniversalStrategies : NSObject
@property (nonatomic) NSArray specifiedCleanArray;
@property (nonatomic) BU_IESGurdGroupClean groupClean;
- (id)groupClean;
- (void)setGroupClean:;
- (void)setSpecifiedCleanArray:;
- (id)specifiedCleanArray;
- (void).cxx_destruct;
+ (id)strategiesWithDictionary:;
@end
