@interface AWETeenMessageCountManager : NSObject
@property (nonatomic) BOOL isRequestOnAir;
- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:;
- (void)fetchUnreadMessageCount:;
- (long long)getTeenUnreadCount:;
+ (id)sharedInstance;
@end
