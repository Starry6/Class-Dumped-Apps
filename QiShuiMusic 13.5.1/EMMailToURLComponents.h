@interface EMMailToURLComponents : NSObject
@property (nonatomic) NSArray toRecipients;
@property (nonatomic) NSArray ccRecipients;
@property (nonatomic) NSArray bccRecipients;
@property (nonatomic) NSString subject;
@property (nonatomic) NSString body;
@property (nonatomic) NSString from;
- (id)init;
- (id)subject;
- (id)initWithURL:;
- (id)body;
- (id)bccRecipients;
- (id)ccRecipients;
- (id)toRecipients;
- (void).cxx_destruct;
- (id)from;
- (void)_decomposeURL:;
+ (id)componentsWithURL:;
@end
