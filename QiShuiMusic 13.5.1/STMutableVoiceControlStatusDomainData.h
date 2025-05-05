@interface STMutableVoiceControlStatusDomainData : STVoiceControlStatusDomainData
@property (nonatomic) BOOL voiceControlActive;
@property (nonatomic) Q listeningState;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)applyDiff:;
- (id)copyWithZone:;
- (void)setVoiceControlActive:;
- (void)setListeningState:;
@end
