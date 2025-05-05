@interface CTSweetgumUserConsentFlowInfo : NSObject
@property (nonatomic) NSString webURL;
@property (nonatomic) NSString postData;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)webURL;
- (BOOL)isEqual:;
- (void)setWebURL:;
- (id)postData;
- (void)setPostData:;
+ (BOOL)supportsSecureCoding;
@end
