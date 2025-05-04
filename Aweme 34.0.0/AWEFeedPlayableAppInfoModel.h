@interface AWEFeedPlayableAppInfoModel : MTLModel
@property (nonatomic) Q appInfoType;
@property (nonatomic) NSString value;
@property (nonatomic) NSString unit;
@property (nonatomic) NSString title;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAppInfoType:;
- (id)value;
- (id)unit;
- (void)setValue:;
- (void)setUnit:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (unsigned long long)appInfoType;
+ (id)JSONKeyPathsByPropertyKey;
@end
