@interface AWEModelLayerIMNetworkProvider.CodeGenTrackStructReqModel : NSObject
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString enterFrom;
- (void)setEnterFrom:;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)enterFrom;
- (id)toJSONString;
- (id)initWithEnterMethod:enterFrom:;
- (id)init;
- (void).cxx_destruct;
@end
