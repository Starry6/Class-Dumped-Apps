@interface MLImageSize : NSObject
@property (nonatomic) q pixelsWide;
@property (nonatomic) q pixelsHigh;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (long long)pixelsHigh;
- (long long)pixelsWide;
- (id)initWithPixelsWide:pixelsHigh:;
- (BOOL)isEqualToImageSize:;
+ (BOOL)supportsSecureCoding;
@end
