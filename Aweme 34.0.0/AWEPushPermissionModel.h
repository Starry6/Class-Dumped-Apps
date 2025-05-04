@interface AWEPushPermissionModel : AWEBaseApiModel
@property (nonatomic) BOOL guideEnabled;
@property (nonatomic) NSString buttonCopywriting;
@property (nonatomic) Q guideType;
- (unsigned long long)guideType;
- (void)setGuideType:;
- (BOOL)enablePushPermissionGuide;
- (id)buttonCopywriting;
- (BOOL)guideEnabled;
- (void)setGuideEnabled:;
- (void)setButtonCopywriting:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
