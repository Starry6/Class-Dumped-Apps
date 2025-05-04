@interface AWEPOIFrequencyControlModel : MTLModel
@property (nonatomic) q type;
@property (nonatomic) q entity;
@property (nonatomic) q showTimes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)showTimes;
- (void)setShowTimes:;
- (long long)entity;
- (long long)type;
- (void)setType:;
- (void)setEntity:;
+ (id)JSONKeyPathsByPropertyKey;
@end
