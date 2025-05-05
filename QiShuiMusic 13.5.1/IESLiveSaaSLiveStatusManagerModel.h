@interface IESLiveSaaSLiveStatusManagerModel : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSMutableArray userList;
@property (nonatomic) NSMutableDictionary timestampDict;
@property (nonatomic) Q fetchCount;
@property (nonatomic) Q modelLocation;
- (unsigned long long)modelLocation;
- (void)setModelLocation:;
- (id)timestampDict;
- (id)init;
- (void)setName:;
- (void).cxx_destruct;
- (id)name;
- (id)userList;
- (void)setFetchCount:;
- (unsigned long long)fetchCount;
@end
