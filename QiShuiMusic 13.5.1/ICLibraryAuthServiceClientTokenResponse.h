@interface ICLibraryAuthServiceClientTokenResponse : NSObject
@property (nonatomic) NSInteger resultCode;
@property (nonatomic) NSString serverHostName;
@property (nonatomic) q serverInstance;
@property (nonatomic) BOOL success;
@property (nonatomic) ICLibraryAuthServiceClientTokenResult tokenResult;
- (BOOL)isSuccess;
- (int)resultCode;
- (id)initWithResponseDictionary:;
- (void)setSuccess:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)tokenResult;
- (id)initWithResultCode:;
- (id)serverHostName;
- (long long)serverInstance;
@end
