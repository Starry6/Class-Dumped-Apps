@interface NSBlockObservationSink : NSObservationSink
- (void)dealloc;
- (void)_receiveBox:;
- (id)initWithBlock:tag:;
@end
