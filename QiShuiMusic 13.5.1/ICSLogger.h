@interface ICSLogger : NSObject
- (void)logAtLevel:forTokenizer:format:args:;
- (void)setDelegate:;
- (void).cxx_destruct;
+ (id)sharedInstance;
+ (void)setDelegate:;
+ (void)logAtLevel:forTokenizer:message:;
@end
