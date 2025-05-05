@interface SFSafariViewControllerPrewarmingToken : NSObject
@property (nonatomic) NSOrderedSet URLs;
@property (nonatomic) Q requestID;
@property (nonatomic) BOOL valid;
- (void)dealloc;
- (id)URLs;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)requestID;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)isEqual:;
- (id)initWithURLs:;
+ (BOOL)supportsSecureCoding;
@end
