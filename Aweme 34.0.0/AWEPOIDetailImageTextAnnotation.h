@interface AWEPOIDetailImageTextAnnotation : NSObject
@property (nonatomic) NSString labelText;
@property (nonatomic) NSString imageName;
@property (nonatomic) {CGSize=dd} imageSize;
@property (nonatomic) {CLLocationCoordinate2D=dd} coordinate;
@property (nonatomic) float zPriority;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)labelText;
- (id)coordinate;
- (void)setCoordinate:;
- (id)subtitle;
- (void)setImageName:;
- (void)setLabelText:;
- (void).cxx_destruct;
- (void)setImageSize:;
- (id)title;
- (id)imageName;
- (id)imageSize;
- (void)setZPriority:;
- (float)zPriority;
@end
