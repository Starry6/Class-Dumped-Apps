@interface PKImageCompare : NSObject
+ (id)filterImage:;
+ (id)compareImage:toMasterImage:filename:differenceImageOutputPath:diffWhite:stdDevThreshhold:;
+ (BOOL)saveImage:toPath:;
+ (id)stringFromSize:;
@end
