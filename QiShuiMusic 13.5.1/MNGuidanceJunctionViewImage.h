@interface MNGuidanceJunctionViewImage : NSObject
@property (nonatomic) Q imageID;
@property (nonatomic) NSData imageData;
- (void)setImageData:;
- (id)imageData;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (unsigned long long)imageID;
- (void)setImageID:;
+ (BOOL)supportsSecureCoding;
@end
