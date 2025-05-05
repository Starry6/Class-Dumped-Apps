@interface BMContentStream : NSObject
@property (nonatomic) NSString identifier;
- (id)publisherFromStartTime:;
- (void)pruneWithPredicateBlock:;
- (id)init;
- (BOOL)pruneEventsWithError:predicateBlock:;
- (id)publisherWithStartTime:endTime:maxEvents:reversed:;
- (id)publisherWithStartTime:endTime:maxEvents:lastN:reversed:;
- (id)publisher;
- (id)identifier;
- (id)initWithStreamIdentifier:;
- (void).cxx_destruct;
- (id)source;
@end
