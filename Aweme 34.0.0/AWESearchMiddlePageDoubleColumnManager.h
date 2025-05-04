@interface AWESearchMiddlePageDoubleColumnManager : NSObject
@property (nonatomic) NSDictionary queryInfoParams;
@property (nonatomic) NSString searchMiddleSelectedAwemeID;
- (void)storeEnterDetailInfo:type:;
- (BOOL)isFirstOuterFromMiddlePageDoulbeColumnWithItemID:;
- (id)fetchQueryInfo;
- (id)queryInfoParams;
- (void)setQueryInfoParams:;
- (void)setSearchMiddleSelectedAwemeID:;
- (void)clearQueryInfo;
- (id)searchMiddleSelectedAwemeID;
- (void)storeEnterDetailInfoWithAweme:;
- (void).cxx_destruct;
+ (BOOL)enableQueryInfo;
+ (BOOL)needAddOuterParmas:;
+ (id)shareInstance;
@end
