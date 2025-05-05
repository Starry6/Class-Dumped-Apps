@interface TrackEntity : NSManagedObject
@property (nonatomic) NSString id;
@property (nonatomic) NSSet playlists;
@property (nonatomic) s downloadStatusValue;
@property (nonatomic) q qualityValue;
@property (nonatomic) q downloadingQualityValue;
@property (nonatomic) NSString spade;
@property (nonatomic) double loudness;
@property (nonatomic) double peak;
@property (nonatomic) NSData trackInfoData;
@property (nonatomic) NSData lyricData;
@property (nonatomic) NSString page;
@property (nonatomic) NSString sceneName;
@property (nonatomic) NSString subSceneName;
@property (nonatomic) BOOL isPreludeAuto;
@property (nonatomic) NSString fromGroupId;
@property (nonatomic) NSString fromGroupType;
@property (nonatomic) NSString requestId;
@property (nonatomic) NSString groupType;
@property (nonatomic) NSString searchChannel;
@property (nonatomic) NSString searchResultCard;
@property (nonatomic) NSString searchMethod;
@property (nonatomic) NSString subQueueType;
- (id)initWithEntity:insertIntoManagedObjectContext:;
- (void).cxx_destruct;
- (void).cxx_construct;
@end
