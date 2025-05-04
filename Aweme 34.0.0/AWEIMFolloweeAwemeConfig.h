@interface AWEIMFolloweeAwemeConfig : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)needShowAwemeTip;
- (BOOL)needShowPlayIcon;
+ (long long)tipStrategy;
+ (BOOL)needShowAwemeTag;
+ (int)awemeVideoCheckIntervalDay;
+ (id)sharedInstance;
@end
