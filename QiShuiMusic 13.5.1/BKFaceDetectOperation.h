@interface BKFaceDetectOperation : BKPresenceDetectOperation
@property (nonatomic) q mode;
@property (nonatomic) double timeout;
@property (nonatomic) BOOL highPriority;
@property (nonatomic) <BKFaceDetectOperationDelegate> delegate;
- (void)setHighPriority:;
- (void)startBioOperation:reply:;
- (void)setTimeout:;
- (BOOL)highPriority;
- (void)statusMessage:details:client:;
- (double)timeout;
- (void)statusMessage:client:;
- (id)initWithDevice:;
- (long long)mode;
- (void)setMode:;
@end
