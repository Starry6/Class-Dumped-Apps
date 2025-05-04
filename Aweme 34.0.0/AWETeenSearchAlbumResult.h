@interface AWETeenSearchAlbumResult : AWEBaseApiModel
@property (nonatomic) AWEMinorAlbum album;
@property (nonatomic) NSString searchAttachInfo;
- (id)searchAttachInfo;
- (void)setSearchAttachInfo:;
- (void)setAlbum:;
- (void).cxx_destruct;
- (id)album;
+ (id)JSONKeyPathsByPropertyKey;
@end
