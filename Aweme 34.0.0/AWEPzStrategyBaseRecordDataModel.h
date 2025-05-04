@interface AWEPzStrategyBaseRecordDataModel : MTLModel
@property (nonatomic) double recordTimestampLimit;
@property (nonatomic) BOOL recordFromUid;
@property (nonatomic) BOOL scopeShareRecord;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setScopeShareRecord:;
- (BOOL)scopeShareRecord;
- (double)recordTimestampLimit;
- (BOOL)recordFromUid;
- (void)setRecordTimestampLimit:;
- (void)setRecordFromUid:;
+ (id)JSONKeyPathsByPropertyKey;
@end
