@interface PGBackdropView : __PGView
@property (nonatomic) NSString groupName;
@property (nonatomic) double gaussianBlurRadius;
@property (nonatomic) double backdropScale;
- (void)dealloc;
- (void)_updateFilters;
- (void)setGroupName:;
- (double)backdropScale;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)groupName;
- (double)gaussianBlurRadius;
- (void)setGaussianBlurRadius:;
- (void)setBackdropScale:;
+ (Class)layerClass;
@end
