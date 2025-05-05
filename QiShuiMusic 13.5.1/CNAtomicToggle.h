@interface CNAtomicToggle : NSObject
- (id)init;
- (id)initWithState:;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
- (BOOL)trySetState:;
@end
