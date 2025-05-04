@interface AWEBatManInfo : MTLModel
@property (nonatomic) AWEBatManEntranceInfo entranceInfo;
@property (nonatomic) NSString batManID;
@property (nonatomic) NSString downloadURL;
@property (nonatomic) NSString extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (id)batManID;
- (id)entranceInfo;
- (void)setEntranceInfo:;
- (void)setBatManID:;
- (id)extra;
- (void).cxx_destruct;
- (id)downloadURL;
- (void)setDownloadURL:;
+ (id)entranceInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
