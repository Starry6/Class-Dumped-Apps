@interface IESLivePKRecordViewModel : NSObject
@property (nonatomic) NSMutableArray recordsArray;
@property (nonatomic) HTSLivePKApi pkAPI;
@property (nonatomic) q currentOffset;
@property (nonatomic) BOOL isFirst;
@property (nonatomic) Q currentCategoryType;
@property (nonatomic) q consecutiveWinCount;
@property (nonatomic) NSString tips;
- (long long)consecutiveWinCount;
- (unsigned long long)currentCategoryType;
- (void)fetchPKRecordType:;
- (id)pkAPI;
- (id)recordsArray;
- (void)setConsecutiveWinCount:;
- (void)setCurrentCategoryType:;
- (void)setIsFirst:;
- (void)setPkAPI:;
- (void)setRecordsArray:;
- (id)tips;
- (id)init;
- (long long)currentOffset;
- (void)setTips:;
- (void).cxx_destruct;
- (BOOL)isFirst;
- (void)setCurrentOffset:;
@end
