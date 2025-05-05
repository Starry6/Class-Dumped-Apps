@interface SSRestrictionCondition : SSProtocolCondition
- (void)dealloc;
- (id)initWithDictionary:;
- (BOOL)evaluateWithContext:;
@end
