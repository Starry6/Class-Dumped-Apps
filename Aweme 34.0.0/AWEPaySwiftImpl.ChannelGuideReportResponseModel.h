@interface AWEPaySwiftImpl.ChannelGuideReportResponseModel : MTLModel
@property (nonatomic) NSString retStatus;
@property (nonatomic) NSString retCode;
@property (nonatomic) NSString retMsg;
- (id)retCode;
- (void)setRetCode:;
- (id)retMsg;
- (void)setRetMsg:;
- (id)retStatus;
- (void)setRetStatus:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
