@interface CalGeocoder : NSObject
@property (nonatomic) NSString locationString;
@property (nonatomic) @? completionBlock;
@property (nonatomic) MKLocalSearch search;
- (void)cancel;
- (void)dealloc;
- (void)setCompletionBlock:;
- (id)search;
- (void).cxx_destruct;
- (id)completionBlock;
- (void)setSearch:;
- (void)setLocationString:;
- (id)locationString;
- (id)initWithLocationString:andCompletionBlock:;
- (void)startGeocoding;
- (void)_callCompletionBlockWithResult:error:;
+ (void)geocodeLocationString:withCompletionBlock:;
@end
