@interface AWESocialRelationError : NSObject
+ (id)networkError;
+ (BOOL)isSocialRelationError:;
+ (id)unavailableError;
+ (BOOL)isUnavailableError:;
+ (id)storageError;
+ (BOOL)isStorageError:;
+ (id)invalidParameterError;
+ (id)errorWithCode:description:;
@end
