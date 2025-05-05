@interface NSURLPromisePair : NSObject
@property (nonatomic) NSURL URL;
@property (nonatomic) NSURL logicalURL;
@property (nonatomic) NSURL physicalURL;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)logicalURL;
- (id)physicalURL;
- (id)URL;
+ (BOOL)supportsSecureCoding;
+ (id)pairWithURL:;
+ (id)pairWithLogicalURL:physicalURL:;
@end
