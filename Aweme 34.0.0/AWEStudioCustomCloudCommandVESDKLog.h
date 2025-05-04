@interface AWEStudioCustomCloudCommandVESDKLog : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)excuteCommandWithParams:completion:;
+ (id)createInstance;
+ (id)cloudCommandIdentifier;
@end
