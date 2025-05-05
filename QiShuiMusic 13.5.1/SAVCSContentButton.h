@interface SAVCSContentButton : SAUIButton
@property (nonatomic) NSString canonicalId;
@property (nonatomic) SASTTemplateContentRating contentRating;
@property (nonatomic) NSString contentType;
@property (nonatomic) NSArray togglePlayPauseCommands;
@property (nonatomic) NSURL url;
- (void)setContentType:;
- (id)url;
- (id)groupIdentifier;
- (id)contentType;
- (void)setUrl:;
- (id)encodedClassName;
- (id)contentRating;
- (void)setContentRating:;
- (id)canonicalId;
- (void)setCanonicalId:;
- (id)togglePlayPauseCommands;
- (void)setTogglePlayPauseCommands:;
+ (id)contentButton;
+ (id)contentButtonWithDictionary:context:;
@end
