@interface CKRecordGraph : NSObject
- (id)init;
- (BOOL)addRecords:error:;
- (id)recordsByTopologicalSortWithError:;
- (void).cxx_destruct;
- (id)description;
+ (id)topologicallySortRecords:withError:;
@end
