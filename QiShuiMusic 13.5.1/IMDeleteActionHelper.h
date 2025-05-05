@interface IMDeleteActionHelper : NSObject
+ (id)_makeDeletePartsDictFor:withIndexes:withIndexToRangeMap:;
+ (unsigned long long)_unsignedIntegerFromString:;
+ (BOOL)_convertDeletedPartsDict:toIndexSet:toMap:;
@end
