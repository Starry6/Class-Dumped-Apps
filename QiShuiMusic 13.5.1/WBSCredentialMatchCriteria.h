@interface WBSCredentialMatchCriteria : NSObject
@property (nonatomic) Q options;
@property (nonatomic) NSURL URL;
@property (nonatomic) NSString partialUsername;
- (unsigned long long)options;
- (void).cxx_destruct;
- (id)URL;
- (id)initWithURL:options:partialUsername:;
- (id)partialUsername;
@end
