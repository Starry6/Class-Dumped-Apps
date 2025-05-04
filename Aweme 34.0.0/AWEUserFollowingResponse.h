@interface AWEUserFollowingResponse : MTLModel
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSNumber minTime;
@property (nonatomic) NSNumber maxTime;
@property (nonatomic) NSArray userList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString userID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)userList;
- (void)setUserList:;
- (id)statusCode;
- (id)userID;
- (void)setMaxTime:;
- (void)setMinTime:;
- (id)maxTime;
- (void)setHasMore:;
- (id)minTime;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (void)setStatusCode:;
- (void)setUserID:;
+ (id)userListJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
