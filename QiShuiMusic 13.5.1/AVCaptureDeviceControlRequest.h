@interface AVCaptureDeviceControlRequest : NSObject
@property (nonatomic) @? completionBlock;
@property (nonatomic) NSInteger requestID;
@property (nonatomic) NSInteger errorCode;
- (void)dealloc;
- (int)errorCode;
- (int)requestID;
- (void)setErrorCode:;
- (id)completionBlock;
- (id)_initWithCompletionBlock:;
+ (id)deviceControlRequestWithCompletionBlock:;
@end
