@interface SSSQLitePropertyPredicate : SSSQLitePredicate
@property (nonatomic) NSString property;
- (id)SQLJoinClausesForEntityClass:;
- (void)dealloc;
- (id)property;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
