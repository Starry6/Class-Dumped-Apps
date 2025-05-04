@interface AWEPrivacyModule : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onAppWillEnterForeground;
- (void)onAppDidEnterBackground;
+ (unsigned long long)priority;
@end
