@interface RACIndexSetSequence : RACSequence
@property (nonatomic) NSData data;
@property (nonatomic) r^Q indexes;
@property (nonatomic) Q count;
- (id)head;
- (id)tail;
- (id)data;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)indexes;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)count;
+ (id)sequenceWithIndexSet:;
+ (id)sequenceWithIndexSetSequence:offset:;
@end
