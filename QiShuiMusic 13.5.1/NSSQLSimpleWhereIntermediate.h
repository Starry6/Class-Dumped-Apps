@interface NSSQLSimpleWhereIntermediate : NSSQLWhereIntermediate
- (id)initWithPredicate:inScope:;
- (void)dealloc;
- (id)_lastScopedItem;
- (id)generateSQLStringInContext:;
- (BOOL)isWhereScoped;
@end
