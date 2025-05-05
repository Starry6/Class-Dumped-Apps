@interface IESLiveSaaSPBWatchInfo : GPBMessage
@property (nonatomic) NSString count;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString countWithBackup;
@property (nonatomic) NSInteger realCount;
@property (nonatomic) q realCountInt64;
@property (nonatomic) NSInteger liveCountDisplayType;
@property (nonatomic) q displayTypeStartTime;
@property (nonatomic) NSString formatCount;
+ (id)descriptor;
@end
