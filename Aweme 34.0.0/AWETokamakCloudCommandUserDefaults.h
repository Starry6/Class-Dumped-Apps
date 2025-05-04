@interface AWETokamakCloudCommandUserDefaults : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)uploadCommandResultSuccessedWithParams:;
- (void)uploadCommandResultFailedWithParams:error:;
- (void)excuteCommandWithParams:completion:;
- (void)setByKey:completion:;
- (void)removeByKey:completion:;
+ (id)createInstance;
+ (id)cloudCommandIdentifier;
@end
