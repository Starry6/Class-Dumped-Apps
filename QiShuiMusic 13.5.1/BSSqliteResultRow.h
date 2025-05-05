@interface BSSqliteResultRow : NSObject
@property (nonatomic) BOOL valid;
@property (nonatomic) Q count;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dataForKey:;
- (id)init;
- (id)keyAtIndex:;
- (id)stringForKey:;
- (id)dataAtIndex:;
- (id)stringAtIndex:;
- (BOOL)isValid;
- (id)objectForKey:;
- (id)objectAtIndex:;
- (void).cxx_destruct;
- (double)doubleAtIndex:;
- (double)doubleForKey:;
- (long long)integerAtIndex:;
- (unsigned long long)count;
- (long long)integerForKey:;
- (void)invalidate;
- (id)copyWithZone:;
@end
