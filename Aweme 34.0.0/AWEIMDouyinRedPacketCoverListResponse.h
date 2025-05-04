@interface AWEIMDouyinRedPacketCoverListResponse : AWEBaseApiModel
@property (nonatomic) NSString retCode;
@property (nonatomic) NSString retMsg;
@property (nonatomic) NSArray coverInfo;
@property (nonatomic) BOOL isCustomizedLimit;
@property (nonatomic) NSString customizedTips;
@property (nonatomic) NSString customizedText;
@property (nonatomic) BOOL isBlankListUser;
@property (nonatomic) NSString stickerId;
- (id)coverInfo;
- (void)setCoverInfo:;
- (id)stickerId;
- (void)setStickerId:;
- (id)retCode;
- (void)setRetCode:;
- (id)retMsg;
- (void)setRetMsg:;
- (BOOL)isCustomizedLimit;
- (void)setIsCustomizedLimit:;
- (id)customizedTips;
- (void)setCustomizedTips:;
- (id)customizedText;
- (void)setCustomizedText:;
- (BOOL)isBlankListUser;
- (void)setIsBlankListUser:;
- (void).cxx_destruct;
+ (id)coverInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
