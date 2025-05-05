@interface CRSQLRow : NSObject
- (id)initWithStatement:;
- (id)stringAtIndex:;
- (id)objectAtIndex:;
- (id)dataAtIndex:copyBytes:;
- (id)numberWithIntegerAtIndex:;
- (id)numberWithDoubleAtIndex:;
+ (id)dataAtIndex:copyBytes:statement:;
+ (id)rowWithStatement:;
+ (id)stringAtIndex:statement:;
+ (id)objectAtIndex:statement:;
+ (id)numberWithIntegerAtIndex:statement:;
+ (int)step:;
+ (int)enumerateRowsInStatement:usingBlock:;
+ (id)numberWithDoubleAtIndex:statement:;
@end
