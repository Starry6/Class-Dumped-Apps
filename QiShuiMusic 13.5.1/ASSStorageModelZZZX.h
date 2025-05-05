@interface ASSStorageModelZZZX : NSObject
@property (nonatomic) NSString apdid;
@property (nonatomic) NSString staticInfoHash;
@property (nonatomic) NSString localToken;
@property (nonatomic) NSString timeStamp;
- (id)apdid;
- (id)localToken;
- (void)setApdid:;
- (void)setLocalToken:;
- (void)setStaticInfoHash:;
- (id)staticInfoHash;
- (id)jsonDescription;
- (void).cxx_destruct;
- (id)timeStamp;
- (void)setTimeStamp:;
- (id)dictionaryDescription;
+ (id)storageModelWithResponse:andHash:;
@end
