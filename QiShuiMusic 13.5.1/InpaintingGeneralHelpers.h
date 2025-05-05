@interface InpaintingGeneralHelpers : NSObject
+ (id)errorWithCode:message:underlyingError:;
+ (id)getMainBundleUsingError:;
+ (id)generalErrorWithMessage:;
+ (BOOL)fillError:withGeneralErrorWithMessage:;
+ (BOOL)fillError:withErrorWithCode:message:underlyingError:;
+ (id)pathForResource:ofType:error:;
+ (id)pathForResourceWithFilename:error:;
+ (id)URLForResource:ofType:error:;
+ (id)stringFromCGRect:;
@end
