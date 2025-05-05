@interface GSPermanentAdditionEnumerator : NSEnumerator
@property (nonatomic) NSError error;
- (id)nextObject;
- (void)dealloc;
- (id)error;
- (void).cxx_destruct;
- (void)_fetchNextBatch;
- (id)initWithStorage:nameSpace:withOptions:withoutOptions:ordering:;
@end
