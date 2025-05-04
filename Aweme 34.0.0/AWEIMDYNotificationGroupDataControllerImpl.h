@interface AWEIMDYNotificationGroupDataControllerImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getGroupDataControllerWithNoticeGroupArray:;
- (id)getLegouIMV3GroupDataControllerWithNoticeGroupArray:;
+ (id)sharedInstance;
@end
