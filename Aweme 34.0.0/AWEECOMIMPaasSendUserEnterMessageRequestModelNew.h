@interface AWEECOMIMPaasSendUserEnterMessageRequestModelNew : NSObject
@property (nonatomic) NSString pigeonShopId;
@property (nonatomic) NSString conGroupId;
@property (nonatomic) NSString cardUrlContextParams;
@property (nonatomic) NSString pigeonBizType;
@property (nonatomic) NSDictionary extParams;
@property (nonatomic) NSString bizServiceEntityID;
@property (nonatomic) NSString pigeonServiceEntityID;
@property (nonatomic) NSString storeID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)extParams;
- (void)setExtParams:;
- (void)setPigeonBizType:;
- (void)setPigeonShopId:;
- (id)pigeonBizType;
- (id)pigeonShopId;
- (id)conGroupId;
- (void)setConGroupId:;
- (id)cardUrlContextParams;
- (void)setCardUrlContextParams:;
- (id)bizServiceEntityID;
- (void)setBizServiceEntityID:;
- (id)pigeonServiceEntityID;
- (void)setPigeonServiceEntityID:;
- (id)convertToPigeonSendUserEnterMessageRequestModel;
- (id)storeID;
- (void)setStoreID:;
- (void).cxx_destruct;
@end
