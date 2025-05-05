@interface MBException : NSException
- (int)errorCode;
- (id)error;
- (id)initWithCode:format:;
- (id)initWithCode:format:args:;
@end
