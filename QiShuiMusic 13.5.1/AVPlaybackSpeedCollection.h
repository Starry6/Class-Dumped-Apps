@interface AVPlaybackSpeedCollection : NSObject
@property (nonatomic) NSArray speeds;
@property (nonatomic) AVPlaybackSpeed selectedSpeed;
- (id)selectedSpeed;
- (id)displaySpeeds;
- (void)setDelegate:;
- (id)debugDescription;
- (id)_initInternalWithSpeeds:;
- (void)selectSpeed:;
- (void)selectNextPlaybackSpeed:;
- (id)delegate;
- (id)activeSpeed;
- (void).cxx_destruct;
- (id)internalDescription;
- (id)description;
- (void)setActiveSpeed:;
- (id)speeds;
+ (id)keyPathsForValuesAffectingDisplaySpeeds;
+ (id)keyPathsForValuesAffectingSelectedSpeed;
+ (id)defaultSpeedFromList:;
+ (id)collectionWithSpeeds:;
@end
