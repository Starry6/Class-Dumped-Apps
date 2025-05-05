@interface NSKeyValueObservationInfo : NSObject
@property (nonatomic) BOOL containsOnlyInternalObservationHelpers;
- (void)dealloc;
- (BOOL)containsOnlyInternalObservationHelpers;
- (id)_initWithObservances:count:hashValue:;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
- (id)_copyByAddingObservance:;
@end
