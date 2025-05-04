@interface AWEUserAppLifeCycle : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)onHandleAppContinueUserActivity;
+ (unsigned long long)priority;
@end
