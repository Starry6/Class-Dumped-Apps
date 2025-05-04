@interface AWEPluginAddressManager : NSObject
@property (nonatomic) NSArray areaArray;
@property (nonatomic) NSMutableArray addressArray;
- (void)editAddressWithModel:callBack:;
- (void)addAddressWithModel:callBack:;
- (id)getAreaArray;
- (void)fetchAreaDataWithCompletion:;
- (id)areaArray;
- (void)setAreaArray:;
- (id)addressArray;
- (id)getHeightForModel:;
- (void)setAddressArray:;
- (id)generateRequestParams:status:;
- (void)requestAllAddressData:;
- (id)getAddressDataArray;
- (void)deleteAddressWithModel:index:callBack:;
- (id)init;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
