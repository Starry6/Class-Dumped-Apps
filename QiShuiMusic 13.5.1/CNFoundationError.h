@interface CNFoundationError : NSObject
+ (BOOL)isFileNotFoundError:;
+ (id)errorWithCode:underlyingError:;
+ (BOOL)isCanceledError:;
+ (id)ifResultIsNil:setOutputError:withBlock:;
+ (id)errorWithErrno;
+ (id)errorWithErrnoAndUserInfo:;
+ (BOOL)isNotImplementedError:;
+ (id)notImplementedError;
+ (BOOL)ifResultIsNo:setOutputError:toError:;
+ (BOOL)isCertificateError:;
+ (BOOL)isError:errorWithDomain:code:;
+ (id)userCanceledError;
+ (id)timeoutError;
+ (id)errorWithErrno:;
+ (BOOL)ifResultIsNo:setOutputError:withBlock:;
+ (BOOL)isFileAlreadyExistsError:;
+ (id)errorWithCode:userInfo:;
+ (BOOL)isTimeoutError:;
+ (id)errorWithErrno:userInfo:;
+ (id)ifResultIsNil:setOutputError:toError:;
@end
