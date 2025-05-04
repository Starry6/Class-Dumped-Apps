@interface AWEECOMIMForestService : NSObject
- (void)fetchWithAccessKey:channel:bundle:completion:;
+ (BOOL)isInhouse;
+ (id)accessKey;
@end
