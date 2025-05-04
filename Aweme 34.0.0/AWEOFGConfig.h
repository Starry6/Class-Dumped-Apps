@interface AWEOFGConfig : NSObject
@property (nonatomic) BOOL isEnabled;
- (id)init;
- (void)setIsEnabled:;
- (BOOL)isEnabled;
+ (id)sharedInstance;
@end
