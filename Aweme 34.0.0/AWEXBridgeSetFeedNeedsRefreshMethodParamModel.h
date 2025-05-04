@interface AWEXBridgeSetFeedNeedsRefreshMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString caller;
@property (nonatomic) BOOL shouldRefresh;
@property (nonatomic) NSString refreshToastMsg;
- (void)setRefreshToastMsg:;
- (id)refreshToastMsg;
- (BOOL)shouldRefresh;
- (void)setShouldRefresh:;
- (id)caller;
- (void)setCaller:;
- (void).cxx_destruct;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
