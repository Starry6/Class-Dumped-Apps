@interface AWERecordInspirationCategoryDetail : MTLModel
@property (nonatomic) q statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) NSArray lists;
@property (nonatomic) q cursor;
@property (nonatomic) q longCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (id)statusMsg;
- (void)setStatusMsg:;
- (void)setLongCursor:;
- (long long)longCursor;
- (long long)cursor;
- (long long)statusCode;
- (id)lists;
- (void)setHasMore:;
- (id)extra;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)setStatusCode:;
- (void)setLists:;
+ (id)listsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
