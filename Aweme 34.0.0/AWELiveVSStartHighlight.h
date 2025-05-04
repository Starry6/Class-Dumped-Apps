@interface AWELiveVSStartHighlight : AWEBaseApiModel
@property (nonatomic) BOOL standard;
@property (nonatomic) NSString descriptionInfo;
@property (nonatomic) q location;
- (id)descriptionInfo;
- (void)setDescriptionInfo:;
- (void)setStandard:;
- (long long)location;
- (void)setLocation:;
- (void).cxx_destruct;
- (BOOL)standard;
+ (id)JSONKeyPathsByPropertyKey;
@end
