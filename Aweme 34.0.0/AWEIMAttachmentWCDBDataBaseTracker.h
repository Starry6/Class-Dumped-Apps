@interface AWEIMAttachmentWCDBDataBaseTracker : NSObject
+ (void)trackDBOpenErrorWithError:info:;
+ (void)trackDBOperateErrorWithError:info:type:;
+ (void)trackDBOpenSuccess;
+ (void)trackDBTransferSuccessWithCount:duration:;
@end
