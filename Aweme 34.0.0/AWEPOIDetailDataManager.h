@interface AWEPOIDetailDataManager : NSObject
@property (nonatomic) AWEPOIDetailConstData constData;
@property (nonatomic) BOOL isRequestOnAir;
- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:;
- (void)rx_store:didSetWithModule:;
- (id)constData;
- (void)setConstData:;
- (void)fetchDataWithDetailCompletion:;
- (id)store;
- (void).cxx_destruct;
+ (id)doPOIDetailRequestWithParam:completion:;
+ (id)getExpectedImageSizeInfo;
@end
