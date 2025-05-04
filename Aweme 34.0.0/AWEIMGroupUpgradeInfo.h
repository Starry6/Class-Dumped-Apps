@interface AWEIMGroupUpgradeInfo : AWEBaseApiModel
@property (nonatomic) NSArray taskList;
@property (nonatomic) IESIMGroupHintNoticeModel taskHintNoticeModel;
@property (nonatomic) IESIMGroupHintNoticeModel nextStepNoticeModel;
@property (nonatomic) IESIMGroupHintNoticeModel confirmUpgradeNoticeModel;
@property (nonatomic) BOOL isReachGroupCountLimit;
@property (nonatomic) IESIMGroupConfirmPageConfig confirmPageConfig;
- (id)confirmPageConfig;
- (void)setConfirmPageConfig:;
- (id)taskHintNoticeModel;
- (void)setTaskHintNoticeModel:;
- (id)nextStepNoticeModel;
- (void)setNextStepNoticeModel:;
- (id)confirmUpgradeNoticeModel;
- (void)setConfirmUpgradeNoticeModel:;
- (BOOL)isReachGroupCountLimit;
- (void)setIsReachGroupCountLimit:;
- (void).cxx_destruct;
- (void)setTaskList:;
- (id)taskList;
+ (id)taskListJSONTransformer;
+ (id)taskHintNoticeModelJSONTransformer;
+ (id)nextStepNoticeModelJSONTransformer;
+ (id)confirmUpgradeNoticeModelJSONTransformer;
+ (id)confirmPageConfigModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
