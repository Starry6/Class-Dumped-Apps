@interface PGPictureInPictureApplication : NSObject
@property (nonatomic) NSInteger processIdentifier;
@property (nonatomic) NSString bundleIdentifier;
- (id)init;
- (id)bundleIdentifier;
- (void)dealloc;
- (unsigned long long)hash;
- (int)processIdentifier;
- (id)initWithProcessIdentifier:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEqualToPGPictureInPictureApplication:;
+ (id)pictureInPictureApplicationWithProcessIdentifier:;
@end
