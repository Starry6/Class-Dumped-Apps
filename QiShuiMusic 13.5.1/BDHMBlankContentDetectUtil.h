@interface BDHMBlankContentDetectUtil : NSObject
+ (BOOL)calculateIsPureColor:dataLength:customColorDiff:;
+ (BOOL)imageIsPureColor:customColorDiff:;
@end
