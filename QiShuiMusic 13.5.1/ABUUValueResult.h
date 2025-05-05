@interface ABUUValueResult : NSObject
@property (nonatomic) NSDictionary data;
@property (nonatomic) ABUUValueRule rule;
@property (nonatomic) NSArray group;
@property (nonatomic) BOOL isFiltered;
@property (nonatomic) q useTime;
@property (nonatomic) q refreshTime;
- (long long)useTime;
- (id)initWithDic:;
- (void)setUseTime:;
- (id)rule;
- (BOOL)isFiltered;
- (void)setRefreshTime:;
- (id)data;
- (void)setGroup:;
- (long long)refreshTime;
- (id)group;
- (void).cxx_destruct;
- (void)setData:;
- (void)setRule:;
- (void)setIsFiltered:;
@end
