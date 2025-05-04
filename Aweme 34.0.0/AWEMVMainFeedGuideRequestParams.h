@interface AWEMVMainFeedGuideRequestParams : NSObject
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString authorID;
@property (nonatomic) @? queryBuilder;
@property (nonatomic) @? bodyBuilder;
- (id)queryBuilder;
- (id)bodyBuilder;
- (void)setQueryBuilder:;
- (void)setBodyBuilder:;
- (id)itemID;
- (void)setItemID:;
- (void).cxx_destruct;
- (id)authorID;
- (void)setAuthorID:;
+ (id)create:authorID:queryBuilder:bodyBuilder:;
@end
