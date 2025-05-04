@interface AWEPOIUGCRateDispatchBDXEventManager : NSObject
@property (nonatomic) NSString lastName;
@property (nonatomic) NSDictionary lastUserInfo;
- (void)publishBDXEventWithName:params:;
- (void)nonredundantPostNotificationName:object:userInfo:;
- (id)lastUserInfo;
- (void)postWithData:;
- (void)setLastUserInfo:;
- (void)setLastName:;
- (id)lastName;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
