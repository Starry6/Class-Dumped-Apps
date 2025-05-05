@interface RACSignalSequence : RACSequence
@property (nonatomic) RACReplaySubject subject;
- (id)head;
- (id)tail;
- (id)subject;
- (id)array;
- (void).cxx_destruct;
- (id)description;
+ (id)sequenceWithSignal:;
@end
