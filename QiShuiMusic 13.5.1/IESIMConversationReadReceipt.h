@interface IESIMConversationReadReceipt : NSObject
@property (nonatomic) IESSaaSTIMOConversationReadReceiptCallback callbackObj;
@property (nonatomic) double requestThrottle;
@property (nonatomic) q convIDCacheLength;
@property (nonatomic) BOOL featureEnable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)requestThrottle;
- (void)setCallbackObj:;
- (void)addWeakReadReceiptCallbackFromServer:;
- (id)callbackObj;
- (long long)convIDCacheLength;
- (id)createReadReceiptReponseModel;
- (id)createReadReceiptRequestModel;
- (BOOL)featureEnable;
- (void)reloadReadReceiptWithModels:requestFrom:completion:;
- (void)setConvIDCacheLength:;
- (void)setFeatureEnable:;
- (void)setRequestThrottle:;
- (void).cxx_destruct;
@end
