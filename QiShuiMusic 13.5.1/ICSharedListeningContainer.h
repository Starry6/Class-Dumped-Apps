@interface ICSharedListeningContainer : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) q kind;
@property (nonatomic) NSString mediaIdentifier;
@property (nonatomic) NSString featureName;
@property (nonatomic) ICSharedListeningItem seedItem;
@property (nonatomic) NSString stationHash;
- (id)initWithProtobuf:;
- (id)identifier;
- (long long)kind;
- (unsigned long long)hash;
- (id)featureName;
- (void).cxx_destruct;
- (id)description;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)mediaIdentifier;
- (id)stationHash;
- (id)_initWithKind:mediaIdentifier:featureName:;
- (id)_initWithKind:seedItem:featureName:;
- (id)seedItem;
+ (id)albumContainerWithMediaIdentifier:featureName:;
+ (id)playlistContainerWithMediaIdentifier:featureName:;
+ (id)radioContainerWithMediaIdentifier:featureName:;
+ (id)radioContainerWithSeedItem:featureName:;
+ (id)groupWithFeatureName:;
+ (id)autoPlayContainerWithMediaIdentifier:featureName:;
@end
