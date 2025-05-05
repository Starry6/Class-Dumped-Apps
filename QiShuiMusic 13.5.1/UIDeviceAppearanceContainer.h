@interface UIDeviceAppearanceContainer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_appearanceGuideClass;
- (id)_appearanceContainer;
+ (BOOL)_preventsAppearanceProxyCustomization;
@end
