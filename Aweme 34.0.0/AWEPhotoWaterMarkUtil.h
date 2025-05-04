@interface AWEPhotoWaterMarkUtil : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)addWaterMarkForSourceImage:completion:;
+ (void)addWaterMarkForSourceImage:waterMarkImageName:completion:;
+ (void)addWaterMarkForSourceImage:waterMarkImage:completion:;
+ (void)addWaterMarkWithoutPaddingForSourceImage:waterMarkImage:completion:;
@end
