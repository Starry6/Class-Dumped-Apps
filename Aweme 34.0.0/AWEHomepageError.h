@interface AWEHomepageError : NSError
+ (id)homepageErrorWithCode:description:;
+ (id)hambErrorWithCode:description:;
+ (id)combineErrorWithCode:description:;
+ (id)dynamicSchedulingErrorWithCode:description:;
@end
