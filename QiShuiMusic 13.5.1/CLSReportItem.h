@interface CLSReportItem : NSObject
- (void)add:;
- (id)sum:;
- (long long)compare:;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (void)scalarMultiply:;
- (id)convertToItemCompatibleWithItem:;
- (id)convertToItemCompatibleWithItem:copyIfSameType:;
- (id)scalarProduct:;
+ (id)sum:;
+ (id)median:;
+ (id)multiply:withScalar:;
+ (id)mean:;
+ (id)midrange:;
@end
