@interface MNTraceBookmark : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) NSData imageData;
- (void)setImageData:;
- (id)imageData;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (double)timestamp;
+ (BOOL)supportsSecureCoding;
@end
