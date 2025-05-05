@interface SBSRelaunchAction : BSAction
@property (nonatomic) NSString reason;
@property (nonatomic) Q options;
@property (nonatomic) NSURL targetURL;
- (id)reason;
- (unsigned long long)options;
- (id)initWithReason:options:targetURL:;
- (id)targetURL;
+ (id)actionWithReason:options:targetURL:;
@end
