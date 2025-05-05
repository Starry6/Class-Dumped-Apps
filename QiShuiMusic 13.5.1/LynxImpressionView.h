@interface LynxImpressionView : LynxUI
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)impressionPercent:requestReset:;
- (void)lynxImpressionWillManualExposureNotification:;
- (void)dealloc;
- (void)exit;
- (void)impression;
- (id)createView;
+ (id)__lynx_prop_config__1051;
+ (void)lynxLazyLoad;
@end
