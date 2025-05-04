@interface AWEAntiAddictDayNightThresholdModel : MTLModel
@property (nonatomic) q dayBegin;
@property (nonatomic) q dayEnd;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)dayBegin;
- (void)setDayBegin:;
- (void)setDayEnd:;
- (long long)dayEnd;
- (BOOL)isValid;
+ (id)instanceWithDayBegin:dayEnd:;
+ (id)JSONKeyPathsByPropertyKey;
@end
