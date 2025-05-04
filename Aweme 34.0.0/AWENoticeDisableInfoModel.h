@interface AWENoticeDisableInfoModel : AWEBaseApiModel
@property (nonatomic) NSString disableDetails;
@property (nonatomic) NSDictionary disableMapDetails;
@property (nonatomic) NSArray disableDialogButtons;
@property (nonatomic) NSString disableDialogTitle;
@property (nonatomic) NSString disableDialogContent;
@property (nonatomic) BOOL hasEntrance;
- (BOOL)hasEntrance;
- (void)setHasEntrance:;
- (id)disableDetails;
- (void)setDisableDetails:;
- (BOOL)isModularizedDisabled;
- (id)disableMapDetails;
- (void)setDisableMapDetails:;
- (id)disableDialogButtons;
- (id)disableDialogTitle;
- (id)disableDialogContent;
- (void)setDisableDialogButtons:;
- (void)setDisableDialogTitle:;
- (void)setDisableDialogContent:;
- (id)initWithDictionary:error:;
- (void).cxx_destruct;
+ (id)disableDialogButtonsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
