@interface IESIMMusicMatchedSongModel : IESIMBaseApiModel
@property (nonatomic) NSString songID;
@property (nonatomic) NSString author;
@property (nonatomic) NSString title;
@property (nonatomic) NSString h5URL;
@property (nonatomic) IESIMURLModel coverMediumURL;
@property (nonatomic) NSString dspName;
@property (nonatomic) NSString sourceID;
- (id)dspName;
- (id)copyrightFlag;
- (id)coverMediumURL;
- (id)h5URL;
- (void)setCoverMediumURL:;
- (void)setDspName:;
- (void)setH5URL:;
- (void)setSongID:;
- (void)setSourceID:;
- (id)sourceID;
- (id)author;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (void)setAuthor:;
- (id)songID;
+ (id)JSONKeyPathsByPropertyKey;
@end
