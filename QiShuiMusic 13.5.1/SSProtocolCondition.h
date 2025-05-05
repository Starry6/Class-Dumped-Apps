@interface SSProtocolCondition : NSObject
- (void)dealloc;
- (id)initWithDictionary:;
- (BOOL)evaluateWithContext:;
+ (id)newConditionWithDictionary:;
@end
