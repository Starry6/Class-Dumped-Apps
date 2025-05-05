@interface CNUIPRLikenessPhotoProvider : NSObject
@property (nonatomic) CNCache cache;
@property (nonatomic) NSString likenessFingerprint;
@property (nonatomic) NSData originalPhotoData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)_cnui_likenessType;
- (void).cxx_destruct;
- (id)cache;
- (id)_cnui_likenessForSize:scale:;
- (id)_cnui_circularImageForSize:scale:;
- (id)_cnui_roundedRectImageForSize:scale:;
- (id)_cnui_imageForSize:scale:;
- (id)_cnui_image;
- (id)likenessFingerprint;
- (id)renderRoundedRectImageForSize:scale:;
- (id)renderCircularImageForSize:scale:;
- (id)initWithPhotoData:fingerprint:;
- (id)originalPhotoData;
+ (id)cgImageFromData:;
+ (id)cgImageFromData:maxSize:;
@end
