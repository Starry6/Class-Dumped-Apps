@interface AWEIMIncentiveChatRelationProgress : NSObject
@property (nonatomic) NSString relationID;
@property (nonatomic) NSString conversationID;
@property (nonatomic) NSString conversationShortID;
@property (nonatomic) q overallProgress;
@property (nonatomic) q targetProgress;
@property (nonatomic) BOOL hasCompleted;
@property (nonatomic) q version;
@property (nonatomic) q msgCreateTime;
@property (nonatomic) Q bonusType;
@property (nonatomic) Q chatType;
@property (nonatomic) AWEIMIncentiveChatRelationProgressCoolDownStatus coolDownStatus;
@property (nonatomic) AWEIMIncentiveChatRelationProgressActivationStatus activationStatus;
@property (nonatomic) AWEIMIncentiveChatRelationProgressSuppressionInfo suppressionInfo;
@property (nonatomic) NSString activationStatusRawData;
@property (nonatomic) NSString coolDownStatusRawData;
@property (nonatomic) NSString suppressionInfoRawData;
- (unsigned long long)chatType;
- (void)setChatType:;
- (id)conversationShortID;
- (void)setConversationShortID:;
- (unsigned long long)bonusType;
- (long long)msgCreateTime;
- (void)setMsgCreateTime:;
- (id)relationID;
- (id)activationStatus;
- (id)suppressionInfo;
- (id)coolDownStatus;
- (void)setRelationID:;
- (id)suppressionInfoRawData;
- (void)setSuppressionInfo:;
- (void)setSuppressionInfoRawData:;
- (id)activationStatusRawData;
- (void)setActivationStatus:;
- (void)setActivationStatusRawData:;
- (id)coolDownStatusRawData;
- (void)setCoolDownStatus:;
- (void)setCoolDownStatusRawData:;
- (void)translateActivationAndCoolDownStatus;
- (void)setOverallProgress:;
- (void)setBonusType:;
- (long long)version;
- (id)conversationID;
- (void)setVersion:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithDictionary:;
- (void)setConversationID:;
- (BOOL)hasCompleted;
- (void)setHasCompleted:;
- (long long)overallProgress;
- (void)setTargetProgress:;
- (long long)targetProgress;
+ (id)conversationShortID;
+ (id)objectRelationalMappingForWCDB;
+ (id)AllProperties;
+ (id)AnyProperty;
+ (id)PropertyNamed;
+ (id)bonusType;
+ (id)msgCreateTime;
+ (id)relationID;
+ (id)suppressionInfoRawData;
+ (id)activationStatusRawData;
+ (id)coolDownStatusRawData;
+ (id)tableName;
+ (id)version;
+ (id)conversationID;
+ (id)hasCompleted;
+ (id)overallProgress;
+ (id)targetProgress;
@end
