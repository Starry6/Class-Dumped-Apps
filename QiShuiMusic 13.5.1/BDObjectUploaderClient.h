@interface BDObjectUploaderClient : NSObject
@property (nonatomic) BOOL finished;
@property (nonatomic) NSDictionary logDict;
@property (nonatomic) NSString sessionToken;
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSString secretKey;
@property (nonatomic) NSDate expirationTime;
@property (nonatomic) NSString regionName;
@property (nonatomic) NSString spaceName;
@property (nonatomic) NSString serverAuth;
@property (nonatomic) NSArray externReaders;
@property (nonatomic) <BDObjectUploadClientDelegate> delegate;
@property (nonatomic) Q uploadActionType;
@property (nonatomic) NSDictionary encryptionInput;
@property (nonatomic) NSDictionary optionInfo;
@property (nonatomic) NSString templateId;
- (id)logDict;
- (id)encryptionInput;
- (void)allowContinueUpload;
- (void)asyncClose;
- (BOOL)checkModel;
- (id)externReaders;
- (id)getObjectInfo:;
- (void)handleNotify:;
- (void)handleNotifyOnMainThread:;
- (id)initWithFilePaths:;
- (id)initWithFilePaths:objectDatas:objectReaders:;
- (id)initWithObjectDatas:;
- (id)initWithObjectReaders:;
- (id)optionInfo;
- (void)parseLog;
- (id)serverAuth;
- (void)setAuthorizationParameter:;
- (void)setCustomHttpHeaders:;
- (void)setDiskResumeUniqueKey:;
- (void)setEncryptionInput:;
- (void)setExternReaders:;
- (void)setLogDict:;
- (void)setObjectHostName:;
- (void)setObjectSceneTag:;
- (void)setOptionInfo:;
- (void)setRequestParameter:;
- (void)setServerAuth:;
- (void)setSpaceName:;
- (void)setUploadActionType:;
- (void)setUploadConfig:;
- (unsigned long long)uploadActionType;
- (void)setFinished:;
- (id)expirationTime;
- (void)setExpirationTime:;
- (void)dealloc;
- (void)setSecretKey:;
- (BOOL)finished;
- (void)start;
- (void)setDelegate:;
- (void)stop;
- (void)close;
- (id)delegate;
- (void).cxx_destruct;
- (id)sessionToken;
- (id)secretKey;
- (id)templateId;
- (void)setTemplateId:;
- (id)accessKey;
- (void)setAccessKey:;
- (void)setSessionToken:;
- (id)regionName;
- (void)setRegionName:;
- (id)spaceName;
+ (void)clearAllCache;
+ (id)cacheDirPath;
+ (void)setCacheDirPath:;
@end
