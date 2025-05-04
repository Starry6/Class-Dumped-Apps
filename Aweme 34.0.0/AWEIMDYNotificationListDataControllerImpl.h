@interface AWEIMDYNotificationListDataControllerImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getDataControllerWithNoticeGroup:topGroup:count:maxTime:minTime:showActivityOverdueToast:;
+ (id)sharedInstance;
@end
