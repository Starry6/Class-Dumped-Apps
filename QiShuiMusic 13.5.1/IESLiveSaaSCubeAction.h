@interface IESLiveSaaSCubeAction : NSObject
@property (nonatomic) NSString keyPath;
@property (nonatomic) @ value;
@property (nonatomic) NSString eventName;
@property (nonatomic) NSDictionary userInfo;
- (id)userInfo;
- (void)setValue:;
- (void)setKeyPath:;
- (id)eventName;
- (void)setEventName:;
- (void)setUserInfo:;
- (id)keyPath;
- (void).cxx_destruct;
- (id)value;
+ (id)packWithEventname:value:userInfo:;
+ (id)packWithKey:value:;
+ (id)packWithKey:value:userInfo:;
@end
