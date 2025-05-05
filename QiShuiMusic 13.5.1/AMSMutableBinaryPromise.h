@interface AMSMutableBinaryPromise : AMSBinaryPromise
- (BOOL)cancel;
- (BOOL)finishWithSuccess:error:;
- (BOOL)finishWithSuccess;
- (BOOL)finishWithError:;
- (BOOL)finishWithPromise:;
+ (BOOL)finishPromise:withError:;
+ (BOOL)finishPromise:withSuccess:;
+ (BOOL)finishPromise:withSuccess:error:;
+ (BOOL)cancelPromise:;
+ (BOOL)finishPromise:withPromise:;
@end
