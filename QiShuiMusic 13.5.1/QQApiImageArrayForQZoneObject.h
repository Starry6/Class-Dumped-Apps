@interface QQApiImageArrayForQZoneObject : QQApiObject
@property (nonatomic) NSArray imageDataArray;
@property (nonatomic) NSDictionary extMap;
- (id)extMap;
- (id)imageDataArray;
- (id)initWithImageArrayData:title:extMap:;
- (void)setExtMap:;
- (void)setImageDataArray:;
+ (id)objectWithimageDataArray:title:extMap:;
@end
