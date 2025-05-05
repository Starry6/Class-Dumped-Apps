@interface MLLayerPath : NSObject
@property (nonatomic) NSString layerName;
@property (nonatomic) NSArray scopedModelNames;
- (void)setScopedModelNames:;
- (id)init;
- (BOOL)isEqualToMLLayerPath:;
- (unsigned long long)hash;
- (id)layerName;
- (void).cxx_destruct;
- (void)setLayerName:;
- (id)scopedModelNames;
- (id)initWithScopedModelAndLayerName:layerName:;
- (void)appendPathComponent:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
