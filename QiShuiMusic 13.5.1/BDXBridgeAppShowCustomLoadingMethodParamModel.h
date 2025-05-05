@interface BDXBridgeAppShowCustomLoadingMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString type;
@property (nonatomic) NSNumber contentChangeInterval;
@property (nonatomic) NSNumber showOnViewController;
@property (nonatomic) NSArray contentArray;
- (id)contentArray;
- (id)contentChangeInterval;
- (void)setContentArray:;
- (void)setContentChangeInterval:;
- (void)setShowOnViewController:;
- (id)showOnViewController;
- (void)setType:;
- (id)type;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
