@interface IESLiveAddAnchorResultModel : IESLiveBridgeModel
@property (nonatomic) NSNumber type;
@property (nonatomic) NSString anchorTitle;
@property (nonatomic) NSString anchorId;
@property (nonatomic) NSString anchorIcon;
@property (nonatomic) IESLiveAddAnchorContentModel content;
@property (nonatomic) @ data;
- (void)setAnchorTitle:;
- (id)anchorIcon;
- (id)anchorId;
- (id)anchorTitle;
- (void)setAnchorIcon:;
- (void)setAnchorId:;
- (id)content;
- (void)setContent:;
- (id)data;
- (void)setType:;
- (id)type;
- (void).cxx_destruct;
- (void)setData:;
+ (id)modelCustomPropertyMapper;
@end
