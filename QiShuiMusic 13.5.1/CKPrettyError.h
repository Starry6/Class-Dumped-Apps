@interface CKPrettyError : NSError
- (void)dealloc;
- (id)CKPartialErrorDescription;
- (void)encodeWithCoder:;
- (id)description;
+ (BOOL)isError:withCodes:;
+ (id)errorWithCode:userInfo:error:path:URL:description:;
+ (id)errorWithCode:error:format:;
+ (id)errorWithCode:userInfo:format:;
+ (id)sanitizedError:;
+ (id)errorWithCode:URL:format:;
+ (id)errorWithCode:userInfo:error:format:;
+ (id)errorWithCode:error:URL:format:;
+ (id)errorWithDomain:code:format:;
+ (id)errorWithCode:error:path:format:;
+ (id)secureCodableError:;
+ (id)errorWithCode:path:format:;
+ (id)errorWithDomain:code:path:format:;
+ (id)_errorDomain;
+ (id)descriptionForError:paths:;
+ (id)errorWithCode:format:;
+ (id)errorWithCode:userInfo:error:format:arguments:;
+ (id)itemErrorFromError:forID:;
+ (BOOL)isError:withCode:;
+ (id)descriptionForError:;
@end
