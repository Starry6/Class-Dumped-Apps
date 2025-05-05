@interface QQDataArray : NSObject
- (id)initWithObjectArray:;
- (id)objectArrayWithClass:;
- (id)init;
- (BOOL)removeObjectAtIndex:;
- (BOOL)replaceObjectAtIndex:withObject:;
- (id)initWithCoder:;
- (void)addObject:;
- (void)removeAllObjects;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (int)count;
+ (id)arrayWithObjectArray:;
+ (BOOL)supportsSecureCoding;
@end
