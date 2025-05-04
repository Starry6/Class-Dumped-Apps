@interface AWEDiggNotificationIMSourceModel : AWEBaseApiModel
@property (nonatomic) q convType;
@property (nonatomic) NSString convId;
@property (nonatomic) q convShortId;
@property (nonatomic) q messageId;
- (id)convId;
- (long long)convShortId;
- (long long)convType;
- (void)setConvId:;
- (void)setConvType:;
- (void)setConvShortId:;
- (long long)messageId;
- (void).cxx_destruct;
- (void)setMessageId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
