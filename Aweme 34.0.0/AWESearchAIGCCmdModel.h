@interface AWESearchAIGCCmdModel : MTLModel
@property (nonatomic) NSString cmdStr;
@property (nonatomic) NSString voiceCMD;
@property (nonatomic) AWESearchAIGCCmdArgsModel args;
@property (nonatomic) AWESearchAIGCContainerInfoModel containerInfo;
@property (nonatomic) NSDictionary display;
@property (nonatomic) NSDictionary appendQueryInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setArgs:;
- (void)setContainerInfo:;
- (id)cmdStr;
- (void)setCmdStr:;
- (id)voiceCMD;
- (void)setVoiceCMD:;
- (id)appendQueryInfo;
- (void)setAppendQueryInfo:;
- (void)setDisplay:;
- (void).cxx_destruct;
- (id)display;
- (id)containerInfo;
- (id)args;
+ (id)containerInfoJSONTransformer;
+ (id)argsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
