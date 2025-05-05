@interface IESLiveSaaSECAccessorImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)liveSDKVersion;
- (id)megaObjectWithKey:;
- (void)recordMegaObject:withKey:;
- (void)requireAuthWithUserInfo:completion:;
- (void)requireRealNameAuthWithCompletion:;
@end
