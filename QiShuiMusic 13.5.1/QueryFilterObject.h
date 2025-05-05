@interface QueryFilterObject : NSObject
@property (nonatomic) NSArray queryPairArray;
@property (nonatomic) NSDictionary keyAndIndexDict;
- (id)keyAndIndexDict;
- (id)initWithQueryPairArray:keyAndIndexDict:;
- (id)queryPairArray;
- (void)setKeyAndIndexDict:;
- (void)setQueryPairArray:;
- (void).cxx_destruct;
@end
