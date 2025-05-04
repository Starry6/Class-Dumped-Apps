@interface AWEUserProfileParamsInjectIMP : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)extraParamsForURL:;
- (id)userProfileParamsWithContext:;
+ (id)sharedInstance;
@end
