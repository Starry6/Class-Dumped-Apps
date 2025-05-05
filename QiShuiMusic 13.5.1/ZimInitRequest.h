@interface ZimInitRequest : NSObject
@property (nonatomic) NSString zimId;
@property (nonatomic) NSString channel;
@property (nonatomic) NSString merchant;
@property (nonatomic) NSString productName;
@property (nonatomic) NSString produceNode;
@property (nonatomic) NSString bizData;
@property (nonatomic) NSString metaInfo;
@property (nonatomic) NSString originAliyunEncToken;
- (void)setProduceNode:;
- (id)bizData;
- (id)originAliyunEncToken;
- (id)produceNode;
- (void)setBizData:;
- (void)setOriginAliyunEncToken:;
- (void)setZimId:;
- (id)zimId;
- (void)setProductName:;
- (id)productName;
- (void)setChannel:;
- (id)channel;
- (void).cxx_destruct;
- (id)merchant;
- (void)setMerchant:;
- (id)metaInfo;
- (void)setMetaInfo:;
@end
