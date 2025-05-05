@interface ASCVideo : NSObject
@property (nonatomic) NSString videoURL;
@property (nonatomic) ASCArtwork preview;
- (id)videoURL;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)preview;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithVideoURL:preview:;
+ (BOOL)supportsSecureCoding;
@end
