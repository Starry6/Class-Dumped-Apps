@interface AWELiveVideoFeedManagerModel : NSObject
@property (nonatomic) Q checkItemsCount;
@property (nonatomic) NSMutableArray userList;
@property (nonatomic) NSString name;
@property (nonatomic) NSMutableDictionary timestampDic;
@property (nonatomic) q modelLocation;
@property (nonatomic) q fetchCount;
- (id)userList;
- (long long)modelLocation;
- (void)setUserList:;
- (id)timestampDic;
- (id)initWithCheckCount:;
- (void)setModelLocation:;
- (unsigned long long)checkItemsCount;
- (void)setTimestampDic:;
- (void)setCheckItemsCount:;
- (id)init;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (long long)fetchCount;
- (void)setFetchCount:;
@end
