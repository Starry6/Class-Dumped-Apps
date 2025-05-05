@interface IESLiveEncryptRoomURLModel : BDDynamicMTLModel
@property (nonatomic) NSString rtmpPullURL;
@property (nonatomic) NSDictionary flvPullURL;
@property (nonatomic) NSString streamData;
@property (nonatomic) NSArray hlsArray;
@property (nonatomic) NSArray flvArray;
@property (nonatomic) NSDictionary pullDatas;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRtmpPullURL:;
- (id)flvArray;
- (id)flvPullURL;
- (id)hlsArray;
- (id)pullDatas;
- (id)rtmpPullURL;
- (void)setFlvArray:;
- (void)setHlsArray:;
- (void)setStreamData:;
- (void).cxx_destruct;
- (id)streamData;
+ (id)flvArrayJSONTransformer;
+ (id)hlsArrayJSONTransformer;
+ (id)pullDatasJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
