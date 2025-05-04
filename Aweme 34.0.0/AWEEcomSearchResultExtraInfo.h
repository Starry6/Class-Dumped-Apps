@interface AWEEcomSearchResultExtraInfo : MTLModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseChunkInfo chunkInfo;
@property (nonatomic) NSDictionary timeCost;
@property (nonatomic) NSString version;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)chunkInfo;
- (id)timeCost;
- (void)fillMerchandiseResp:;
- (void)setChunkInfo:;
- (void)setTimeCost:;
- (id)version;
- (void)setVersion:;
- (void).cxx_destruct;
+ (id)chunkInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
