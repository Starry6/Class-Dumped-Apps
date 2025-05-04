@interface AWEIMDownloadResourceModel : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSNumber version;
@property (nonatomic) Q resourceType;
@property (nonatomic) NSString url;
@property (nonatomic) BOOL inAdvance;
@property (nonatomic) NSString triggerType;
@property (nonatomic) NSArray randomInteractiveEmojiResultInfos;
- (id)randomInteractiveEmojiResultInfos;
- (void)setRandomInteractiveEmojiResultInfos:;
- (BOOL)inAdvance;
- (void)setInAdvance:;
- (unsigned long long)resourceType;
- (void)setResourceType:;
- (void)setUrl:;
- (id)version;
- (void)setVersion:;
- (id)description;
- (void).cxx_destruct;
- (id)triggerType;
- (void)setTriggerType:;
- (void)setName:;
- (id)name;
- (id)url;
@end
