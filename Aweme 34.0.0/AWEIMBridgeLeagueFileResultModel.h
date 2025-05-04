@interface AWEIMBridgeLeagueFileResultModel : BDXBridgeModel
@property (nonatomic) NSNumber resourceStatus;
@property (nonatomic) NSString errorMsg;
- (void)setErrorMsg:;
- (id)errorMsg;
- (id)resourceStatus;
- (void)setResourceStatus:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
