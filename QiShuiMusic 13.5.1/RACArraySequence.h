@interface RACArraySequence : RACSequence
@property (nonatomic) NSArray array;
@property (nonatomic) NSArray backingArray;
@property (nonatomic) Q offset;
- (id)backingArray;
- (id)head;
- (id)tail;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)array;
- (id)initWithCoder:;
- (unsigned long long)offset;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
+ (id)sequenceWithArray:offset:;
@end
