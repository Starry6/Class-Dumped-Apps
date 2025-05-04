@interface AWEMissionRequirementsPromptService : HTSService
@property (nonatomic) NSString refer;
@property (nonatomic) AWEPublishmentProcessObserver observer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRefer:;
- (id)refer;
- (void)endCurrentMissionPublishmentSession;
- (void)startPublishmentSessionWithRequiredStickerIDs:musics:MVIDs:challenges:usersShouldBeMentioned:mission:;
- (void)checkToastValidationAtIndex:text:;
- (void)startPublishmentSessionWithChallenge:;
- (void)startPublishmentSessionWithMission:;
- (id)observer;
- (void)setObserver:;
- (void).cxx_destruct;
@end
