@interface AWEIMBridgeLeagueFileModel : BDXBridgeModel
@property (nonatomic) NSString fileName;
@property (nonatomic) NSString uri;
@property (nonatomic) NSString url;
@property (nonatomic) NSString fileType;
@property (nonatomic) NSString fileSize;
@property (nonatomic) NSString cid;
@property (nonatomic) NSString msgId;
@property (nonatomic) NSString iconUrl;
- (id)iconUrl;
- (void)setIconUrl:;
- (id)cid;
- (id)fileType;
- (void)setUrl:;
- (void)setFileSize:;
- (id)uri;
- (id)fileName;
- (void)setUri:;
- (id)fileSize;
- (void)setFileType:;
- (void).cxx_destruct;
- (void)setFileName:;
- (id)url;
- (id)msgId;
- (void)setMsgId:;
- (void)setCid:;
+ (id)JSONKeyPathsByPropertyKey;
@end
