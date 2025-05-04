@interface AWEPlayInteractionElementContainerFactory : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)createBottomContainerWithViewController:context:;
+ (id)createDefaultBottomElementContainerProviderWithViewController:context:;
+ (id)createLeftContainerWithViewController:context:;
+ (id)createRightContainerWithViewController:context:;
+ (id)createDefaultLeftElementContainerProviderWithViewController:context:;
@end
