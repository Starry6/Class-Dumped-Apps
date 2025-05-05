@interface CJPayServerEvent : JSONModel
@property (nonatomic) NSString eventName;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) NSString intergratedMerchantId;
- (id)intergratedMerchantId;
- (void)setExtra:;
- (void)setIntergratedMerchantId:;
- (id)toStrForUpload;
- (id)extra;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
@end
