@interface AWEIMNotificationGroupDataRequestModelNew : MTLModel
@property (nonatomic) NSNumber maxTime;
@property (nonatomic) NSNumber minTime;
@property (nonatomic) NSNumber count;
@property (nonatomic) NSNumber group;
@property (nonatomic) NSNumber isMarkRead;
@property (nonatomic) NSNumber isInteractive;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)isMarkRead;
- (void)setIsMarkRead:;
- (void)setMaxTime:;
- (void)setCount:;
- (id)isInteractive;
- (void)setGroup:;
- (void)setMinTime:;
- (id)maxTime;
- (id)minTime;
- (id)group;
- (id)count;
- (void).cxx_destruct;
- (id)initWithGroup:;
- (void)setIsInteractive:;
+ (id)JSONKeyPathsByPropertyKey;
@end
