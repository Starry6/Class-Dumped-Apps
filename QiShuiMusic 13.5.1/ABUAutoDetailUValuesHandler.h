@interface ABUAutoDetailUValuesHandler : ABUSingleton
@property (nonatomic) NSMutableDictionary detailValues;
- (void)addUValue:withParam:andType:;
- (void)archiveUValuesToDisk;
- (id)detailValues;
- (id)filterConditionWithParam:;
- (void)removeUValuesFromDisk;
- (void)resetUValues;
- (void)setDetailValues:;
- (void)unarchiveUValuesFromDisk;
- (id)uvalueForAutoDetailWithParam:;
- (void)removeAll;
- (id)init;
- (void).cxx_destruct;
+ (void)addUValue:withParam:andType:;
+ (id)filterConditionWithParam:;
+ (id)sharedInstance;
@end
