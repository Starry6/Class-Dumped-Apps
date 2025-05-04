@interface AWEIMMixPhotoAnchorInfo : MTLModel
@property (nonatomic) NSString anchorId;
@property (nonatomic) NSNumber anchorType;
@property (nonatomic) NSString anchorTitle;
@property (nonatomic) NSString anchorTag;
@property (nonatomic) NSString anchorIcon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAnchorIcon:;
- (id)anchorId;
- (void)setAnchorId:;
- (id)anchorIcon;
- (id)anchorTitle;
- (void)setAnchorTitle:;
- (id)anchorTag;
- (void)setAnchorTag:;
- (void).cxx_destruct;
- (id)anchorType;
- (void)setAnchorType:;
+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;
@end
