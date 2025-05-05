@interface ML3ProcessClient : ML3Client
- (int)processID;
- (id)init;
- (id)name;
- (id)bundleID;
+ (id)sharedProcessClient;
@end
