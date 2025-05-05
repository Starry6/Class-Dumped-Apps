@interface CKException : NSException
@property (nonatomic) NSInteger errorCode;
- (int)errorCode;
- (id)error;
- (id)initWithCode:format:;
- (id)initWithCode:format:args:;
- (id)initWithName:format:;
- (id)initWithName:format:args:;
@end
