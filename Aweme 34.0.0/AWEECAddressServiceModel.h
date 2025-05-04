@interface AWEECAddressServiceModel : NSObject
@property (nonatomic) IESECAddressServiceModel addrModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)addrModel;
- (id)toSimpleJson;
- (id)toSimpleJsonWithBizcode:filterList:;
- (unsigned long long)addressListCount;
- (id)filterAddressForBizCode:;
- (id)initWithAddressServiceModel:;
- (void)setAddrModel:;
- (void).cxx_destruct;
@end
