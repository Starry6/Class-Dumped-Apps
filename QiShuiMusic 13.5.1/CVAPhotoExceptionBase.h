@interface CVAPhotoExceptionBase : NSException
- (void)log;
- (id)error;
- (id)initWithName:reason:userInfo:;
- (id)getReasonStr;
- (int)getErrorCode;
@end
