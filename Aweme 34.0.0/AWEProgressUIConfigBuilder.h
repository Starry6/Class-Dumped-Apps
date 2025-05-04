@interface AWEProgressUIConfigBuilder : NSObject
- (id)aAWEBrandColorAdapter;
+ (Class)aAWEBrandColorAdapterClass;
+ (id)sliderThemeColor;
+ (id)configsWithScene:model:referString:outerContext:;
+ (id)progressViewUIConfigWithScene:model:referString:outerContext:;
+ (id)decoratorViewStatusConfigWithScene:model:referString:outerContext:;
+ (id)timeIndicatorUIConfigWithScene:model:referString:;
+ (id)previewViewUIConfigWithScene:model:referString:;
+ (id)relatedVideoProgressViewConfigModel:referString:outerContext:;
+ (id)relatedVideoTimeIndicatorUIConfigWithModel:referString:;
+ (id)relatedVideoPreviewViewUIConfigModel:referString:;
+ (id)relatedVideoDecoratorViewUIConfigWithModel:referString:outerContext:;
+ (unsigned long long)decoratorBizType:referString:context:;
+ (unsigned long long)decoratorTypeWithBiz:model:referString:context:;
+ (id)decoratorDotInfos:decoratorType:bizType:;
+ (id)decoratorStatusConfig:decoratorType:bizType:;
+ (BOOL)shouldShowTryWatchViewDot:referString:context:;
+ (BOOL)shouldShowVideoHeadTailView:referString:context:;
+ (id)dotInfoForTryWatchView:;
+ (id)dotInfoForVideoHeadTailView:;
@end
