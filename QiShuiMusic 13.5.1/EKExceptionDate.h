@interface EKExceptionDate : EKObject
@property (nonatomic) NSDate date;
- (id)initWithDate:;
- (id)date;
- (void)setDate:;
- (id)description;
+ (Class)frozenClass;
+ (id)knownIdentityKeysForComparison;
@end
