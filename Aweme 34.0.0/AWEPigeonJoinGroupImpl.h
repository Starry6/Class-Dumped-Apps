@interface AWEPigeonJoinGroupImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)callMethod:arguments:completion:;
- (void)joinGroupWithParams:completion:;
- (id)errMsgWithErrCode:errString:;
+ (id)pigeonMethodName;
+ (id)create;
@end
