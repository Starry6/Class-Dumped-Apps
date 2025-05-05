@interface MRArtwork : NSObject
@property (nonatomic) NSData imageData;
@property (nonatomic) q height;
@property (nonatomic) q width;
@property (nonatomic) NSDictionary dictionaryRepresentation;
- (void)setImageData:;
- (id)initWithProtobuf:;
- (id)imageData;
- (void)setWidth:;
- (id)debugDescription;
- (long long)height;
- (long long)width;
- (id)artworkByResizingWithWidth:height:;
- (void)setHeight:;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithImageData:height:width:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
