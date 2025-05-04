@interface AWESearchSeedFilterItemModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString value;
@property (nonatomic) q showDotTimeStamp;
@property (nonatomic) NSString logValue;
@property (nonatomic) NSString iconUnselectedUrl;
@property (nonatomic) NSString iconSelectedUrl;
@property (nonatomic) NSString iconDarkUnselectedUrl;
@property (nonatomic) BOOL dotShown;
- (BOOL)dotShown;
- (long long)showDotTimeStamp;
- (BOOL)showDot;
- (void)setShowDotTimeStamp:;
- (void)setLogValue:;
- (id)iconSelectedUrl;
- (void)setDotShown:;
- (id)iconUnselectedUrl;
- (id)iconDarkUnselectedUrl;
- (id)value;
- (void)setValue:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)logValue;
+ (id)JSONKeyPathsByPropertyKey;
@end
