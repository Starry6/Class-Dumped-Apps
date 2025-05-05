@interface GEOFilePathsPrivate : NSObject
+ (id)userContainerLibPathUsingLibSystem;
+ (id)systemContainerCachesPathUsingLibSystem;
+ (id)systemContainerLibraryPathUsingLibSystem;
+ (id)pathForSearchPath:andDomain:;
+ (id)daemonContainerLibraryPathUsingLibSystem;
+ (id)systemContainerPathUsingLibSystem;
+ (id)daemonContainerCachesPathUsingLibSystem;
+ (id)daemonContainerPathUsingLibSystem;
+ (id)userContainerCachesPathUsingLibSystem;
@end
