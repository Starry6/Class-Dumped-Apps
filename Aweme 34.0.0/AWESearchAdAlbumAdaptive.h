@interface AWESearchAdAlbumAdaptive : MTLModel
@property (nonatomic) BOOL enable;
@property (nonatomic) double proportion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)proportion;
- (void)setProportion:;
- (BOOL)enable;
- (void)setEnable:;
+ (id)JSONKeyPathsByPropertyKey;
@end
