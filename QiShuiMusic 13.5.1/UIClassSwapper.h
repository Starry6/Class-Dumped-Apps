@interface UIClassSwapper : NSObject
- (id)className;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)object;
- (id)initWithObject:andClassName:;
- (id)performSelectorForObject:selector:withObject:withObject:withObject:;
+ (id)swapperForObject:withClassName:;
@end
