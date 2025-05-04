@interface AWEMVChannelAlertInterceptor : NSObject
@property (nonatomic) <AWEMVChannelAlertInterceptorDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)interceptorActionBeforeShowWithContext:;
- (void)interceptorActionBeforeTriggerEventWithEvent:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
