@interface CBStack : NSObject
@property (nonatomic) Q length;
@property (nonatomic) @ objectToPop;
@property (nonatomic) NSMutableArray stack;
- (id)init;
- (void)dealloc;
- (void)clear;
- (id)initWithLength:;
- (id)stack;
- (unsigned long long)length;
- (void)setLength:;
- (void)pushObj:;
- (id)popObj;
- (void)printStack;
- (id)objectToPop;
@end
