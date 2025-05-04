@interface AWETokamakCloudCommandKiteLog : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)uploadCommandResultSuccessedWithParams:;
- (void)uploadCommandResultFailedWithParams:error:;
- (void)excuteCommandWithParams:completion:;
- (void)uploadLog:completion:;
+ (id)createInstance;
+ (id)cloudCommandIdentifier;
@end
