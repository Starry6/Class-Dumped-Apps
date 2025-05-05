@interface IESECAddToCartParams : NSObject
@property (nonatomic) NSString productID;
@property (nonatomic) NSString comboID;
@property (nonatomic) NSString comboNum;
@property (nonatomic) NSString extra;
@property (nonatomic) BOOL needSaaSHeaders;
@property (nonatomic) BOOL cancelToast;
@property (nonatomic) NSString channelId;
@property (nonatomic) q channelType;
- (id)comboID;
- (void)setCancelToast:;
- (BOOL)needSaaSHeaders;
- (BOOL)cancelToast;
- (id)comboNum;
- (void)setComboID:;
- (void)setComboNum:;
- (void)setExtra:;
- (void)setNeedSaaSHeaders:;
- (id)productID;
- (id)extra;
- (void)setProductID:;
- (void).cxx_destruct;
- (long long)channelType;
- (id)channelId;
- (void)setChannelId:;
- (void)setChannelType:;
@end
