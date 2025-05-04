@interface AWEFeedLongVideoPlusUtil : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (double)updateStartTimeForFeedWithModel:;
+ (void)submitHistoryWithAweme:currentPlaybackTime:extraParams:;
+ (long long)longVideoStartPlayTypeWithModel:;
@end
