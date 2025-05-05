@interface SAUIAcePronunciationItem : AceObject
@property (nonatomic) NSArray commands;
@property (nonatomic) NSString title;
@property (nonatomic) NSString tts;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setTitle:;
- (id)commands;
- (id)title;
- (id)encodedClassName;
- (void)setCommands:;
- (id)tts;
- (void)setTts:;
+ (id)acePronunciationItem;
+ (id)acePronunciationItemWithDictionary:context:;
@end
