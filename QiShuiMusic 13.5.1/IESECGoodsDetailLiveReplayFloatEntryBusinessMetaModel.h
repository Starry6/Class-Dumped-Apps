@interface IESECGoodsDetailLiveReplayFloatEntryBusinessMetaModel : MTLModel
@property (nonatomic) IESECLinkConfig link;
@property (nonatomic) IESECLinkConfig livingLinkUrl;
@property (nonatomic) NSString videoID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)livingLinkUrl;
- (void)setLivingLinkUrl:;
- (id)link;
- (void)setLink:;
- (void).cxx_destruct;
- (id)videoID;
- (void)setVideoID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
