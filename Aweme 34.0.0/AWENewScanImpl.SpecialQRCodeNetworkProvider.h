@interface AWENewScanImpl.SpecialQRCodeNetworkProvider : AWEDataLayerMantlePostMethodNetworkProvider
@property (nonatomic) NSString itemID;
@property (nonatomic) NSDictionary extraInfo;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)itemID;
- (void)setItemID:;
- (id)init;
- (void).cxx_destruct;
- (Class)modelClass;
- (id)extraInfo;
- (void)setExtraInfo:;
+ (id)businessURI;
@end
