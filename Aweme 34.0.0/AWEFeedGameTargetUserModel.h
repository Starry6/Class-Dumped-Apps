@interface AWEFeedGameTargetUserModel : NSObject
@property (nonatomic) BOOL isTargetUser;
@property (nonatomic) q targetUserExpireTime;
- (void)setIsTargetUser:;
- (void)setTargetUserExpireTime:;
- (BOOL)isTargetUser;
- (long long)targetUserExpireTime;
+ (id)modelWithJson:;
@end
