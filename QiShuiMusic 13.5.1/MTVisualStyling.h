@interface MTVisualStyling : NSObject
@property (nonatomic) UIColor color;
@property (nonatomic) double alpha;
@property (nonatomic) CAFilter composedFilter;
@property (nonatomic) NSString visualStyleSetName;
@property (nonatomic) NSString visualStyleName;
@property (nonatomic) MTCoreMaterialVisualStyling coreMaterialVisualStyling;
- (id)visualEffect;
- (id)color;
- (id)composedFilter;
- (id)visualStyleName;
- (double)alpha;
- (id)_layerConfig;
- (id)_coreMaterialVisualStyling;
- (void).cxx_destruct;
- (id)initWithCoreMaterialVisualStyling:;
- (id)visualStyleSetName;
- (void)applyToView:withColorBlock:;
@end
