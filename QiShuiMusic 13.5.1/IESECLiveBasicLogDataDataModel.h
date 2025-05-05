@interface IESECLiveBasicLogDataDataModel : IESLiveBridgeModel
@property (nonatomic) NSDictionary native;
@property (nonatomic) NSDictionary order;
@property (nonatomic) NSString entranceInfo;
@property (nonatomic) NSDictionary extra;
- (id)entranceInfo;
- (void)setEntranceInfo:;
- (void)setExtra:;
- (void)setNative:;
- (id)extra;
- (id)order;
- (id)native;
- (void).cxx_destruct;
- (void)setOrder:;
+ (id)modelCustomPropertyMapper;
@end
