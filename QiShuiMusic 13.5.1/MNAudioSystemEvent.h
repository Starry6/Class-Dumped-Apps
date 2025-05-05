@interface MNAudioSystemEvent : NSObject
@property (nonatomic) NSString utterance;
@property (nonatomic) Q shortPrompt;
@property (nonatomic) Q guidanceLevel;
@property (nonatomic) BOOL isPrivate;
@property (nonatomic) BOOL hasSoundEffect;
@property (nonatomic) @? handler;
- (BOOL)isPrivate;
- (id)handler;
- (void).cxx_destruct;
- (BOOL)isEqualToEvent:;
- (id)description;
- (id)utterance;
- (unsigned long long)guidanceLevel;
- (unsigned long long)shortPrompt;
- (id)initWithUtterance:andShortPrompt:andVoiceGuidanceLevel:andCompletion:;
- (BOOL)hasSoundEffect;
@end
