@interface HTSDAlligator  : NSObject
+ (BOOL)unzipFileAtPath:toDestination:completion:;
+ (BOOL)unzipFileAtPath:toDestination:privateKey:completion:;
@end
