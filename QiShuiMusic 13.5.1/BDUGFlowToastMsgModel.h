@interface BDUGFlowToastMsgModel : BDUGFlowBasicModel
@property (nonatomic) NSString freeflowNormalMsg;
@property (nonatomic) NSString freeflowWillUseupMsg;
@property (nonatomic) NSString freeflowUsedupMsg;
- (id)freeflowNormalMsg;
- (id)freeflowUsedupMsg;
- (id)freeflowWillUseupMsg;
- (void)setFreeflowNormalMsg:;
- (void)setFreeflowUsedupMsg:;
- (void)setFreeflowWillUseupMsg:;
- (void).cxx_destruct;
- (id)toJsonDictionary;
+ (id)modelWithDictionary:;
@end
