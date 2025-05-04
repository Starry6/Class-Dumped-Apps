@interface AWEMusicPromoteAnchorModel : MTLModel
@property (nonatomic) NSString comment;
@property (nonatomic) NSString tag;
@property (nonatomic) NSString metaSongId;
@property (nonatomic) AWEAdLinkModel linkModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)linkModel;
- (void)setMetaSongId:;
- (id)metaSongId;
- (void)setLinkModel:;
- (id)tag;
- (id)comment;
- (void)setTag:;
- (void).cxx_destruct;
- (void)setComment:;
+ (id)linkModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
