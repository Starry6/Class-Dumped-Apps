@interface AWESearchTrackerOnceManager : NSObject
@property (nonatomic) NSMutableDictionary recordMap;
- (BOOL)hasRecordWithUniqueID:;
- (void)addRecordWithUniqueID:;
- (void)clear;
- (id)description;
- (void).cxx_destruct;
- (id)recordMap;
- (void)setRecordMap:;
@end
