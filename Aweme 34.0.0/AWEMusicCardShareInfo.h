@interface AWEMusicCardShareInfo : AWEBaseApiModel
@property (nonatomic) AWEMusicCardUrlModel shareCover;
@property (nonatomic) NSString shareLink;
@property (nonatomic) NSString commonDesc;
@property (nonatomic) NSString openAnchorShareId;
- (id)openAnchorShareId;
- (void)setOpenAnchorShareId:;
- (id)shareLink;
- (void)setShareLink:;
- (id)shareCover;
- (void)setShareCover:;
- (id)commonDesc;
- (void)setCommonDesc:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
