@interface AWEBatManBusinessModel : NSObject
@property (nonatomic) NSString batManId;
@property (nonatomic) NSString batManName;
@property (nonatomic) NSString iconURL;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString authorId;
@property (nonatomic) NSInteger orientationType;
@property (nonatomic) NSInteger authType;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)setOrientationType:;
- (int)orientationType;
- (void)setBatManId:;
- (void)setBatManName:;
- (id)batManId;
- (id)batManName;
- (BOOL)checkAuthParamValid;
- (void)setIconURL:;
- (id)init;
- (int)authType;
- (id)iconURL;
- (void).cxx_destruct;
- (void)setAuthType:;
- (id)copyWithZone:;
- (id)authorId;
- (void)setAuthorId:;
@end
