@interface AWEAlertCommerceInterceptor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)interceptorActionBeforeShowWithContext:;
- (id)interceptorActionBeforeTrackWithContext:;
+ (id)sharedManager;
@end
