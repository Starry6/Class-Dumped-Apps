@interface AWEPendantPopupTime : MTLModel
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStartTime:;
- (double)endTime;
- (void)setEndTime:;
- (double)startTime;
+ (id)JSONKeyPathsByPropertyKey;
@end
