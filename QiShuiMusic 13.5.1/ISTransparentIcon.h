@interface ISTransparentIcon : ISConcreteIcon
- (id)init;
- (id)initWithCoder:;
- (id)makeResourceProvider;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
+ (id)sharedInstance;
@end
