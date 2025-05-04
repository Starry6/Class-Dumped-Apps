@interface AWETokamakCloudCommandFile : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)uploadCommandResultSuccessedWithParams:;
- (void)uploadCommandResultFailedWithParams:error:;
- (void)excuteCommandWithParams:completion:;
- (void)createFile:completion:;
- (void)createBinaryFileByBase64:completion:;
- (void)deleteFile:completion:;
+ (id)createInstance;
+ (id)cloudCommandIdentifier;
@end
