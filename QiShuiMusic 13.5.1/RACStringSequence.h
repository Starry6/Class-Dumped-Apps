@interface RACStringSequence : RACSequence
@property (nonatomic) NSString string;
@property (nonatomic) Q offset;
- (id)string;
- (id)head;
- (id)tail;
- (id)array;
- (unsigned long long)offset;
- (void).cxx_destruct;
- (id)description;
+ (id)sequenceWithString:offset:;
@end
