@interface DESRecordSet : NSObject
@property (nonatomic) NSDictionary nativeRecords;
@property (nonatomic) NSDictionary nativeRecordInfo;
@property (nonatomic) NSArray coreDuetEvents;
@property (nonatomic) Q count;
@property (nonatomic) NSDictionary predicate;
- (id)initWithCoder:;
- (id)predicate;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)nativeRecordDataForRecordUUID:error:;
- (id)nativeRecordInfo;
- (id)nativeRecords;
- (id)initWithNativeRecords:nativeRecordInfo:coreDuetEvents:;
- (id)initWithNativeRecords:nativeRecordInfo:coreDuetEvents:predicate:dataFetcher:;
- (id)nativeRecordInfoForRecordUUID:;
- (id)_anyNativeRecordUUID;
- (id)filteredRecordSetWithJSONPredicate:;
- (id)coreDuetEvents;
+ (BOOL)supportsSecureCoding;
+ (id)recordSetWithRecipeType:nativeRecords:coreDuetEventsUUIDs:error:;
@end
