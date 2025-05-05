@interface CVAPhotoExceptionMetalResourceUnavailable : CVAPhotoExceptionBase
- (id)init;
- (id)getReasonStr;
- (int)getErrorCode;
+ (id)error;
+ (id)throwIfNil:;
@end
