@interface AWEIMDynamicMessageTrackModel : NSObject
@property (nonatomic) AWEIMMessage message;
@property (nonatomic) AWEIMMessageComponentContext context;
@property (nonatomic) q trackAction;
@property (nonatomic) NSString serverParamsKey;
- (long long)trackAction;
- (id)initWithMessage:context:trackAction:;
- (void)setTrackAction:;
- (id)serverParamsKey;
- (void)setServerParamsKey:;
- (id)message;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setMessage:;
- (id)context;
@end
