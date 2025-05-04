@interface AWEECFeedMallBubbleActionLimit : NSObject
@property (nonatomic) q limitMaxCount;
@property (nonatomic) q limitMaxDate;
- (BOOL)canShow;
- (void)setLimitMaxCount:;
- (void)setLimitMaxDate:;
- (long long)limitMaxCount;
- (long long)limitMaxDate;
- (void)clearStoreCount;
- (void)storeHasShow;
+ (id)common;
@end
