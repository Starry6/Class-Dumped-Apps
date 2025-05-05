@interface WBSParsecSearchResponse : NSObject
@property (nonatomic) double maxAge;
@property (nonatomic) Q sizeInBytes;
@property (nonatomic) NSArray completionResultSets;
@property (nonatomic) WBSParsecSearchCompletionResultSet bestCompletionResultSet;
@property (nonatomic) NSArray statusCodesForCompletionResultSets;
- (unsigned long long)sizeInBytes;
- (double)maxAge;
- (void).cxx_destruct;
- (id)initWithArray:responseHeaders:sizeInBytes:cache:;
- (id)bestCompletionResultSet;
- (id)statusCodesForCompletionResultSets;
- (id)completionResultSets;
+ (id)searchResponseSchemaWithCache:;
@end
