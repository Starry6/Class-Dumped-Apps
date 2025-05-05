@interface WKReloadFrameErrorRecoveryAttempter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)attemptRecovery;
- (id)initWithWebView:frameHandle:urlString:;
+ (BOOL)supportsSecureCoding;
@end
