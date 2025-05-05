@interface MSError : NSError
+ (id)MSErrorWithDomain:code:errorLevel:underlyingError:description:arguments:;
+ (id)MSErrorWithDomain:code:errorLevel:underlyingError:description:;
+ (id)MSErrorWithDomain:code:underlyingError:description:;
@end
