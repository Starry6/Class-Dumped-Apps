@interface IESECEcGalleryParamModel : IESLiveBridgeModel
@property (nonatomic) NSArray images;
@property (nonatomic) NSArray videos;
@property (nonatomic) NSArray titles;
@property (nonatomic) NSNumber type;
@property (nonatomic) NSNumber index;
- (void)setType:;
- (id)images;
- (id)index;
- (id)type;
- (void)setIndex:;
- (void).cxx_destruct;
- (void)setImages:;
- (id)titles;
- (void)setTitles:;
- (id)videos;
- (void)setVideos:;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@end
