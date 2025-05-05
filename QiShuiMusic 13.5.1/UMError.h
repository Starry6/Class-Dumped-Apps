@interface UMError : NSObject
+ (id)errorWithErrorCode:;
+ (id)errorWithErrorCode:underlyingError:;
+ (id)errorWithErrorCode:userInfo:;
@end
