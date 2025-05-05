@interface IESIMBatManInfo : MTLModel
@property (nonatomic) IESIMBatManEntranceInfo entranceInfo;
@property (nonatomic) NSString batManID;
@property (nonatomic) NSString downloadURL;
@property (nonatomic) NSString extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)batManID;
- (id)entranceInfo;
- (void)setBatManID:;
- (void)setEntranceInfo:;
- (void)setExtra:;
- (id)extra;
- (id)downloadURL;
- (void).cxx_destruct;
- (void)setDownloadURL:;
+ (id)entranceInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
