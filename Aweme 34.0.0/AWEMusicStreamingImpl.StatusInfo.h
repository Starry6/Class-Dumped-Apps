@interface AWEMusicStreamingImpl.StatusInfo : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) NSString errorDetail;
@property (nonatomic) NSString logId;
@property (nonatomic) q now;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) NSString abParam;
- (id)statusMsg;
- (id)logId;
- (void)setStatusMsg:;
- (void)setLogId:;
- (id)abParam;
- (void)setAbParam:;
- (long long)now;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (void)setNow:;
- (id)initWithCoder:;
- (void)setErrorDetail:;
- (id)errorDetail;
+ (id)JSONKeyPathsByPropertyKey;
@end
