@interface MKLocalSearchSection : NSObject
@property (nonatomic) NSArray results;
@property (nonatomic) NSString title;
@property (nonatomic) BOOL shouldInterleaveClientResults;
@property (nonatomic) BOOL enforceServerResultsOrder;
@property (nonatomic) BOOL enableMapsSuggestServerReranking;
- (id)results;
- (id)title;
- (void).cxx_destruct;
- (BOOL)shouldInterleaveClientResults;
- (BOOL)enforceServerResultsOrder;
- (BOOL)enableMapsSuggestServerReranking;
- (id)initWithResults:title:shouldInterleaveClientResults:enforceServerResultsOrder:enableMapsSuggestServerReranking:;
@end
