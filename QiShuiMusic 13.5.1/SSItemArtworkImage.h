@interface SSItemArtworkImage : NSObject
@property (nonatomic) {CGSize=dd} imageSize;
@property (nonatomic) NSString imageKind;
@property (nonatomic) NSURL URL;
@property (nonatomic) NSString URLString;
@property (nonatomic) q height;
@property (nonatomic) q width;
@property (nonatomic) q imageOrientation;
@property (nonatomic) double imageScale;
@property (nonatomic) BOOL prerendered;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (void)_setValue:forKey:;
- (double)imageScale;
- (void)dealloc;
- (id)copyXPCEncoding;
- (id)URLString;
- (unsigned long long)hash;
- (id)imageSize;
- (long long)height;
- (long long)imageOrientation;
- (long long)width;
- (id)valueForProperty:;
- (id)description;
- (BOOL)isEqual:;
- (void)setURL:;
- (id)URL;
- (id)copyWithZone:;
- (void)setValue:forProperty:;
- (id)initWithArtworkDictionary:;
- (BOOL)isPrerendered;
- (void)setImageKindWithTypeName:variantName:;
- (id)imageKind;
- (void)setImageKind:;
@end
