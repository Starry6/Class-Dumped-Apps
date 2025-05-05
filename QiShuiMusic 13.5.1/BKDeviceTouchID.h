@interface BKDeviceTouchID : BKDevice
- (BOOL)enableBackgroundFingerDetection:error:;
- (id)createMatchOperationWithError:;
- (id)createPresenceDetectOperationWithError:;
- (id)createEnrollOperationWithError:;
- (id)createExtendEnrollTouchIDOperationWithError:;
+ (BOOL)deviceAvailableWithFailure:;
@end
