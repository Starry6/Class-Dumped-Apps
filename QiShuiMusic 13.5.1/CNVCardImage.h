@interface CNVCardImage : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) NSDictionary cropRects;
@property (nonatomic) {CGSize=dd} size;
- (id)init;
- (id)data;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (id)size;
- (id)initWithData:cropRects:size:;
- (void)describePropertiesWithBuilder:;
- (id)cropRects;
- (id)initWithData:cropRects:;
+ (id)sizeOfImageData:;
@end
