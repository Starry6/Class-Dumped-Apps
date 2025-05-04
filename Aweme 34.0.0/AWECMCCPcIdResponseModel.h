@interface AWECMCCPcIdResponseModel : MTLModel
@property (nonatomic) NSString msgId;
@property (nonatomic) NSString systemTime;
@property (nonatomic) NSString message;
@property (nonatomic) NSString expandParams;
@property (nonatomic) NSString resultCode;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString pcId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)expandParams;
- (void)setExpandParams:;
- (id)pcId;
- (void)setPcId:;
- (id)message;
- (id)resultCode;
- (void)setDesc:;
- (id)desc;
- (void).cxx_destruct;
- (void)setMessage:;
- (void)setResultCode:;
- (id)msgId;
- (void)setMsgId:;
- (void)setSystemTime:;
- (id)systemTime;
+ (id)JSONKeyPathsByPropertyKey;
@end
