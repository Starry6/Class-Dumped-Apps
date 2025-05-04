@interface AWESearchFilterItemModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString value;
@property (nonatomic) q showDotTimeStamp;
@property (nonatomic) NSString logValue;
@property (nonatomic) BOOL dotShown;
- (BOOL)dotShown;
- (long long)showDotTimeStamp;
- (BOOL)showDot;
- (void)setShowDotTimeStamp:;
- (void)setLogValue:;
- (void)setDotShown:;
- (id)value;
- (void)setValue:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)logValue;
+ (id)JSONKeyPathsByPropertyKey;
@end
