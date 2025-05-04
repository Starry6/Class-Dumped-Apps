@interface AWEECOMIMTopNotifyDataSource : NSObject
@property (nonatomic) NSString scene;
@property (nonatomic) NSArray allMessageList;
@property (nonatomic) AWEECOMIMNetworkImp networkImp;
@property (nonatomic) NSArray cardModelList;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString groupId;
- (id)cardModelList;
- (id)networkImp;
- (void)setNetworkImp:;
- (id)initWithGroupId:networkImp:;
- (void)fetchChatListTopNotifyDataSourceWithCompletion:;
- (id)initWithGroupId:networkImp:useCache:;
- (id)cacheKeyWithKey:;
- (void)setCardModelList:;
- (void)setAllMessageList:;
- (id)allMessageList;
- (id)cursor;
- (void)setGroupId:;
- (id)groupId;
- (void)setScene:;
- (id)scene;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (BOOL)shouldUseCache;
@end
