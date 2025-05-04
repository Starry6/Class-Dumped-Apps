@interface AWEMessageReachPopViewTracker : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)injectTrackExtra:context:;
+ (void)trackOnPopViewClickWithContext:clickType:extra:;
+ (void)trackOnPopViewCloseWithContext:closeType:extra:;
+ (void)injectTrackExtra:forceAlertContext:;
+ (void)trackOnPopViewClickWithForceAlertContext:clickType:extra:;
+ (void)trackOnPopViewCloseWithForceAlertContext:closeType:extra:;
+ (id)getEnterFromWithViewController:;
+ (void)trackOnForceAlertReject:triggerID:rejectType:msg:;
+ (void)trackOnNormalAlertWithContext:rejectType:msg:;
+ (void)trackOnPopViewShowWithContext:;
+ (void)trackOnPopViewShowWithForceAlertContext:;
+ (void)p_injectTrackExtra:context:;
+ (void)p_trackOnPopViewShowWithContext:;
+ (void)p_trackOnPopViewClickWithContext:clickType:extra:;
+ (void)p_trackOnPopViewCloseWithContext:closeType:extra:;
+ (void)trackOnPopViewReject:;
+ (id)generateParamsWithContext:;
+ (id)getClickTypeTrackString:;
@end
