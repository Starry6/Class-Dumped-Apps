@interface AWEPadHistoryListResponseModel : MTLModel
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSDictionary awemeDate;
@property (nonatomic) NSNumber maxCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeList;
- (void)setAwemeList:;
- (id)maxCursor;
- (void)setMaxCursor:;
- (id)awemeDate;
- (void)setAwemeDate:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
