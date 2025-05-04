@interface AWEConcernDislikeManager : NSObject
- (void)reportDislikeWithAweme:;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
