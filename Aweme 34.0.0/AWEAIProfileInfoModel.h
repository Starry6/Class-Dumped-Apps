@interface AWEAIProfileInfoModel : MTLModel
@property (nonatomic) NSString formatID;
@property (nonatomic) NSString aiCloneName;
@property (nonatomic) NSString aiCloneBrief;
@property (nonatomic) NSString formatOwnerID;
@property (nonatomic) NSString formatDigitalHumanID;
@property (nonatomic) NSNumber formatImBotId;
@property (nonatomic) NSString formatNewImBotId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)formatNewImBotId;
- (id)formatOwnerID;
- (id)formatImBotId;
- (void)setFormatImBotId:;
- (id)aiCloneName;
- (void)setAiCloneName:;
- (id)aiCloneBrief;
- (void)setAiCloneBrief:;
- (void)setFormatOwnerID:;
- (id)formatDigitalHumanID;
- (void)setFormatDigitalHumanID:;
- (void)setFormatNewImBotId:;
- (void).cxx_destruct;
- (id)formatID;
- (void)setFormatID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
