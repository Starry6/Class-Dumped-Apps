@interface PETStringPairs : NSObject
@property (nonatomic) NSArray keys;
@property (nonatomic) NSArray values;
@property (nonatomic) Q count;
- (id)keys;
- (id)valueAtIndex:;
- (id)values;
- (id)keyAtIndex:;
- (id)initWithKeys:values:;
- (void).cxx_destruct;
- (id)subsetForKeys:;
- (unsigned long long)count;
@end
