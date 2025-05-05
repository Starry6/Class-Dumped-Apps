@interface ICDeviceSupport : NSObject
+ (id)productName;
+ (id)productVersion;
+ (id)deviceName;
+ (id)productBuildVersion;
+ (BOOL)isRunningUnitTests;
+ (BOOL)deviceIsMac;
+ (BOOL)isTouchIDEnrolled;
+ (BOOL)hasPasscode;
+ (BOOL)isRunningInApp;
+ (BOOL)deviceIsIPad;
+ (BOOL)isBiometricsAvailable;
+ (BOOL)isBiometricsEnrolled;
+ (id)notesDeviceDrawingSize;
+ (BOOL)isFaceIDEnrolled;
+ (BOOL)isFaceIDAvailable;
+ (BOOL)isTouchIDAvailable;
+ (BOOL)deviceSupportsPencil;
+ (long long)evaluateBiometricsCachedPolicyState:outCurrentPolicyState:;
+ (BOOL)deviceSupportsFirstGenPencil;
+ (BOOL)deviceSupportsSystemPaper;
+ (id)notesProductType;
+ (BOOL)deviceIsSimulator;
+ (BOOL)isRunningDuoTests;
+ (id)evaluatedBiometricsContextWithError:;
+ (BOOL)isTouchIDLockedOut;
@end
