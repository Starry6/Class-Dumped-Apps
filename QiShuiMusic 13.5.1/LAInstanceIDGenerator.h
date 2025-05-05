@interface LAInstanceIDGenerator : NSObject
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)nextInstanceIDInDomain:;
+ (id)sharedInstance;
@end
