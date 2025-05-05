@interface GEOPublisherResult : NSObject
@property (nonatomic) GEOPublisher publisher;
- (id)publisher;
- (void).cxx_destruct;
- (id)initWithPublisherResult:;
+ (id)publisherResultsFromResponse:;
@end
