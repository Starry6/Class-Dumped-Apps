@interface AVControlEventTargetAction : NSObject
- (unsigned long long)hash;
- (void)sendAction:;
- (BOOL)hasMatchingEvent:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithTarget:action:event:;
@end
