@interface AnnieSetContainerPageUIModel : IESLiveBridgeModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString titleColor;
@property (nonatomic) NSString navBarColor;
@property (nonatomic) NSString statusBarBgColor;
@property (nonatomic) q statusFontMode;
@property (nonatomic) NSNumber statusBarHidden;
- (BOOL)modelCustomTransformFromDictionary:;
@end
