@interface AWEOpenRecordModeFactoryImpl : NSObject
@property (nonatomic) NSDictionary modeMapDictionary;
@property (nonatomic) AWEVideoPublishViewModel repository;
@property (nonatomic) ACCCreationToolMediaTypeObject mediaType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)storyMode;
- (id)modeWithIdentifier:;
- (id)displayModesArray;
- (id)modeWithButtonType:;
- (id)modeMapDictionary;
- (id)tabConfigWithTitle:forMode:;
- (void)setModeMapDictionary:;
- (id)pictureMode;
- (id)pictureAlbumMode;
- (id)mixHoldModeVariable;
- (id)configTitleWithRecordMode:forMode:;
- (void)setMediaType:;
- (id)repository;
- (id)mediaType;
- (void).cxx_destruct;
- (void)setRepository:;
+ (BOOL)preconditionEnableLive:;
@end
