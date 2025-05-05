@interface IESECAddressServiceModel : NSObject
@property (nonatomic) NSDictionary rawResponse;
@property (nonatomic) NSArray addressList;
@property (nonatomic) NSError error;
- (void)setAddressList:;
- (id)addressList;
- (id)toSimpleJson;
- (id)toSimpleJsonWithBizcode:filterList:;
- (void)setError:;
- (id)error;
- (id)rawResponse;
- (void).cxx_destruct;
- (void)setRawResponse:;
@end
