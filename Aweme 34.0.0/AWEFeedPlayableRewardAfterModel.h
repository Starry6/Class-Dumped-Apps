@interface AWEFeedPlayableRewardAfterModel : MTLModel
@property (nonatomic) AWEFeedPlayableIconModel icon;
@property (nonatomic) NSString title;
@property (nonatomic) NSString value;
@property (nonatomic) NSString unit;
@property (nonatomic) NSString startTime;
@property (nonatomic) NSString endTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)value;
- (id)unit;
- (void)setStartTime:;
- (id)endTime;
- (void)setEndTime:;
- (id)icon;
- (void)setValue:;
- (void)setUnit:;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)title;
- (id)startTime;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
