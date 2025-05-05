@interface WXImageObject : NSObject
@property (nonatomic) NSData imageData;
@property (nonatomic) NSString imgDataHash;
- (void)setImgDataHash:;
- (id)imgDataHash;
- (void)setImageData:;
- (id)imageData;
- (void).cxx_destruct;
+ (id)object;
@end
