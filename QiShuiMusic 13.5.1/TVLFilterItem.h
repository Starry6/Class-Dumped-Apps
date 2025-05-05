@interface TVLFilterItem : NSObject
@property (nonatomic) ^{CGImage=} image;
@property (nonatomic) NSString imageName;
@property (nonatomic) ^{CGImage=} hdrImage;
@property (nonatomic) NSString hdrImageName;
- (id)hdrImage;
- (id)hdrImageName;
- (void)setHdrImage:;
- (void)setHdrImageName:;
- (void)setImageName:;
- (id)imageName;
- (void)setImage:;
- (id)image;
@end
