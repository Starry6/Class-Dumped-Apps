@interface AWEAdLinkTagRenderer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)tagImageWithAweme:constrainedWidth:inScene:;
+ (id)tagSizeWithAweme:constrainedWidth:inScene:;
+ (id)tagWithAweme:constrainedWidth:inSecene:;
+ (id)imageWithTag:;
+ (id)tagImageWithAweme:inScene:;
+ (id)tagSizeWithAweme:inScene:;
@end
