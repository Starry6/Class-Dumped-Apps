@interface AWEIMDouyinRedPacketSendResponse : AWEBaseApiModel
@property (nonatomic) AWEIMDouyinRedPacketYapmentInfoModel info;
@property (nonatomic) Q businessCode;
@property (nonatomic) NSString businessMsg;
@property (nonatomic) NSString businessTitle;
- (id)businessTitle;
- (void)setBusinessTitle:;
- (unsigned long long)businessCode;
- (id)businessMsg;
- (void)setBusinessCode:;
- (void)setBusinessMsg:;
- (void)setInfo:;
- (id)info;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)infoJSONTransformer;
@end
