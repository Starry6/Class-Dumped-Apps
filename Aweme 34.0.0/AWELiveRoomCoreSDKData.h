@interface AWELiveRoomCoreSDKData : AWEBaseApiModel
@property (nonatomic) AWELiveRoomPullData pullData;
@property (nonatomic) NSString size;
- (id)pullData;
- (void)setPullData:;
- (id)liveCoreSDKData;
- (id)initWithCoreSDKData:;
- (id)size;
- (void).cxx_destruct;
- (void)setSize:;
+ (id)pullDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
