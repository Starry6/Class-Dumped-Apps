@interface AWEIMNotificationGroupDataRequestModelNew : MTLModel
@property (nonatomic) NSNumber maxTime;
@property (nonatomic) NSNumber minTime;
@property (nonatomic) NSNumber count;
@property (nonatomic) NSNumber group;
@property (nonatomic) NSNumber isMarkRead;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)isMarkRead;
- (void)setIsMarkRead:;
- (void)setCount:;
- (id)maxTime;
- (id)minTime;
- (void)setMinTime:;
- (void)setMaxTime:;
- (void)setGroup:;
- (id)group;
- (void).cxx_destruct;
- (id)count;
- (id)initWithGroup:;
+ (id)JSONKeyPathsByPropertyKey;
@end
