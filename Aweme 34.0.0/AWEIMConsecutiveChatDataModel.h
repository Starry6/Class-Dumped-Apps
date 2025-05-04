@interface AWEIMConsecutiveChatDataModel : NSObject
@property (nonatomic) q newExpireTimeStamp;
@property (nonatomic) q canRecoverDay;
- (id)initWithConsecutiveChatDataInfoString:;
- (id)initWithNewExpireTimeStamp:canRecoverDay:;
- (long long)canRecoverDay;
- (long long)newExpireTimeStamp;
- (void)setNewExpireTimeStamp:;
- (void)setCanRecoverDay:;
- (unsigned long long)hash;
- (BOOL)isEqual:;
@end
