@interface FigCaptureFlatPlist : NSObject
- (void)dealloc;
- (id)bplist;
+ (id)flatPlistWithContentsOfFile:;
+ (id)flatPlistWithContentsOfURL:;
@end
