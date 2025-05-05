@interface RACEmptySequence : RACSequence
- (id)bind:passingThroughValuesFromSequence:;
- (id)head;
- (id)tail;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (Class)classForCoder;
- (BOOL)isEqual:;
+ (id)empty;
@end
