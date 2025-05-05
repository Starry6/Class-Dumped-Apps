@interface LAAuthorizationError : NSObject
+ (id)resourceNotFound;
+ (id)resourceNotFoundWithMessage:;
+ (id)resourceNotFoundWithUnderylingError:;
+ (BOOL)isResourceNotFoundError:;
+ (id)genericErrorWithMessage:;
+ (id)genericErrorWithStatus:;
+ (id)missingImplementation;
@end
