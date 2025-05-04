@interface AWEBindGuideTaskStorageModel : AWEBaseApiModel
@property (nonatomic) q showCount;
@property (nonatomic) BOOL isClickedInSettingEntrance;
@property (nonatomic) BOOL isClickedInAccountManageEntrance;
@property (nonatomic) NSDate firstShowDate;
@property (nonatomic) NSDate lastShowDate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lastShowDate;
- (void)setLastShowDate:;
- (id)firstShowDate;
- (BOOL)isClickedInSettingEntrance;
- (BOOL)isClickedInAccountManageEntrance;
- (void)setIsClickedInSettingEntrance:;
- (void)setIsClickedInAccountManageEntrance:;
- (void)setFirstShowDate:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)setShowCount:;
- (long long)showCount;
+ (id)JSONKeyPathsByPropertyKey;
@end
