@interface AWERichFullPageContextBridgeModel : NSObject
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSDictionary logExtraDict;
- (void)setLogExtraDict:;
- (id)referString;
- (void)setEnterFrom:;
- (void)setReferString:;
- (id)logExtraDict;
- (id)enterFrom;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
@end
