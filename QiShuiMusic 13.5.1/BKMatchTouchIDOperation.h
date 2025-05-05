@interface BKMatchTouchIDOperation : BKMatchOperation
@property (nonatomic) <BKMatchTouchIDOperationDelegate> delegate;
@property (nonatomic) BOOL requireFingerOff;
- (id)optionsDictionaryWithError:;
- (void)statusMessage:client:;
- (BOOL)requireFingerOff;
- (void)setRequireFingerOff:;
@end
