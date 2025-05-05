@interface FBSDataResetRequest : NSObject
@property (nonatomic) q mode;
@property (nonatomic) q options;
@property (nonatomic) NSString reason;
- (void)setOptions:;
- (id)reason;
- (void)setReason:;
- (long long)options;
- (void).cxx_destruct;
- (long long)mode;
- (void)setMode:;
- (id)initWithMode:options:reason:;
@end
