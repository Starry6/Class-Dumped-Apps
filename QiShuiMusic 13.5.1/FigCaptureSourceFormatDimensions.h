@interface FigCaptureSourceFormatDimensions : NSObject
@property (nonatomic) {?=ii} dimensions;
@property (nonatomic) {?=ii} deferredPhotoProxyDimensions;
@property (nonatomic) BOOL isPrivate;
@property (nonatomic) NSInteger flavor;
@property (nonatomic) {?=ii} maxUpscalingDimensions;
- (id)dimensions;
- (BOOL)isPrivate;
- (id)deferredPhotoProxyDimensions;
- (BOOL)dimensionsAreEqualToDimensions:;
- (id)description;
- (id)initWithDimensions:deferredPhotoProxyDimensions:isPrivate:flavor:maxUpscalingDimensions:;
- (int)flavor;
- (id)maxUpscalingDimensions;
+ (id)identifyDimensionsFromFlavor:availableHighResStillImageDimensions:;
+ (int)identifyResolutionFlavorFromDimensions:availableHighResStillImageDimensions:;
+ (id)identifySourceFormatDimensionsFromDimensions:availableHighResStillImageDimensions:;
@end
