@interface AWEStudioMediaServiceMointor : NSObject
- (void)p_audioSessionMediaServicesWereLostNotification;
- (void)p_audioSessionMediaServicesWereResetNotification;
- (id)init;
- (void)dealloc;
- (void)addObservers;
+ (id)sharedInstance;
@end
