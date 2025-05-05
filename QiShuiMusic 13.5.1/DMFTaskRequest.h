@interface DMFTaskRequest : CATTaskRequest
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnCurrentPlatform;
+ (BOOL)isPermittedOnPlatform:;
@end
