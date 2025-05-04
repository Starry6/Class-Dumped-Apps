@interface AWEFeedAdapterReuseConfig : NSObject
@property (nonatomic) BOOL enableReuse;
- (BOOL)enableReuse;
- (void)setEnableReuse:;
+ (id)sharedInstance;
@end
