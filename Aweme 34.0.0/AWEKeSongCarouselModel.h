@interface AWEKeSongCarouselModel : AWEBaseApiModel
@property (nonatomic) NSString componentID;
@property (nonatomic) AWEBarIconModel headerIcon;
@property (nonatomic) AWEBarTextModel mainContent;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString extra;
@property (nonatomic) NSString trackInfo;
- (void)setExtra:;
- (id)headerIcon;
- (void)setHeaderIcon:;
- (id)mainContent;
- (void)setMainContent:;
- (id)schema;
- (void)setSchema:;
- (id)extra;
- (void).cxx_destruct;
- (void)setComponentID:;
- (id)componentID;
- (void)setTrackInfo:;
- (id)trackInfo;
+ (id)headerIconJSONTransformer;
+ (id)mainContentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
