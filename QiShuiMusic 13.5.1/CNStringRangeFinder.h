@interface CNStringRangeFinder : NSObject
+ (id)rangesOfStrings:inString:;
+ (id)rangesOfString:inString:;
+ (void)removeOverlappingRanges:;
@end
