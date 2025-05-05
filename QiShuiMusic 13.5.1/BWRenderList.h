@interface BWRenderList : NSObject
@property (nonatomic) BOOL prepared;
@property (nonatomic) ^{BWRenderListRendererList=^{BWRenderListRendererNode}} rendererList;
@property (nonatomic) BOOL producesOriginalRender;
@property (nonatomic) BOOL supportsAnimation;
@property (nonatomic) BOOL affectsMetadata;
@property (nonatomic) NSSet originalFilterNames;
@property (nonatomic) NSSet processedFilterNames;
@property (nonatomic) ^{BWRenderListParameterList=^{BWRenderListParameterNode}} parameterList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)affectsMetadata;
- (void)dealloc;
- (id)processedFilterNames;
- (BOOL)isPrepared;
- (void)setPrepared:;
- (id)initWithResourceProvider:originalFilters:processedFilters:optimizationStrategy:;
- (BOOL)shouldAllowOriginalRenderFromNode:;
- (BOOL)supportsAnimation;
- (BOOL)producesOriginalRender;
- (id)parameterList;
- (id)rendererList;
- (id)originalFilterNames;
- (id)initWithAnimationSupported:affectsMetadata:;
- (void)prepareWithParameters:forInputVideoFormat:inputDepthFormat:;
+ (id)shallowDepthOfFieldFilterName;
@end
