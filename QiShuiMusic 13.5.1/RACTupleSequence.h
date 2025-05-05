@interface RACTupleSequence : RACSequence
@property (nonatomic) NSArray tupleBackingArray;
@property (nonatomic) Q offset;
- (id)tupleBackingArray;
- (id)head;
- (id)tail;
- (id)array;
- (unsigned long long)offset;
- (void).cxx_destruct;
- (id)description;
+ (id)sequenceWithTupleBackingArray:offset:;
@end
