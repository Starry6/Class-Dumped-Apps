@interface DMFClearRestrictionsPasswordRequest : DMFTaskRequest
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
