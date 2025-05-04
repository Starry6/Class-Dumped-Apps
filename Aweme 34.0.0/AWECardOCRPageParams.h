@interface AWECardOCRPageParams : NSObject
@property (nonatomic) NSNumber cardType;
@property (nonatomic) NSNumber direction;
@property (nonatomic) NSNumber banScan;
@property (nonatomic) NSNumber banCamera;
@property (nonatomic) NSNumber banAlbum;
- (id)banScan;
- (void)setBanScan:;
- (id)banCamera;
- (void)setBanCamera:;
- (id)banAlbum;
- (void)setBanAlbum:;
- (id)direction;
- (void)setDirection:;
- (void).cxx_destruct;
- (double)rotationAngle;
- (id)cardType;
- (void)setCardType:;
- (id)pageTransform;
@end
