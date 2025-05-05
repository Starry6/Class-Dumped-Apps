@interface IESECSKUNewSpecItemModel : NSObject
@property (nonatomic) NSString picURL;
@property (nonatomic) q specImageType;
@property (nonatomic) IESECSKUSpecItemInfo specItem;
@property (nonatomic) double maxWidth;
@property (nonatomic) UIColor atmosphereColor;
@property (nonatomic) BOOL specShowImageAndPrice;
- (id)atmosphereColor;
- (id)picURL;
- (void)setAtmosphereColor:;
- (void)setPicURL:;
- (void)setSpecImageType:;
- (void)setSpecItem:;
- (void)setSpecShowImageAndPrice:;
- (long long)specImageType;
- (id)specItem;
- (BOOL)specShowImageAndPrice;
- (double)maxWidth;
- (void)setMaxWidth:;
- (void).cxx_destruct;
@end
