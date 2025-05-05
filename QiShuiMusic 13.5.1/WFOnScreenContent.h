@interface WFOnScreenContent : NSObject
@property (nonatomic) NSURL URL;
@property (nonatomic) INFile file;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)file;
- (void).cxx_destruct;
- (id)URL;
- (id)initWithURL:file:;
+ (BOOL)supportsSecureCoding;
@end
