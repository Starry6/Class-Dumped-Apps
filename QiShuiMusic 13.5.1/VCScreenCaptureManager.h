@interface VCScreenCaptureManager : NSObject
- (id)init;
- (void)dealloc;
- (void)registerBlocksForService;
- (id)getErrorDictionaryFromError:;
- (void)screenCaptureStartFor:didSucceed:withError:;
- (void)screenCaptureStopFor:didSucceed:withError:;
- (id)screenShareDictionary:;
- (void)startPrivacyAccountingInternval;
- (void)endPrivacyAccountingInterval;
+ (id)sharedManager;
@end
