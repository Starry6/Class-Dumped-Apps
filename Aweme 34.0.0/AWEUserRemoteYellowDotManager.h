@interface AWEUserRemoteYellowDotManager : NSObject
@property (nonatomic) NSArray yellowPoints;
@property (nonatomic) NSString userID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)tapYellowDotForType:;
- (id)yellowPoints;
- (void)setYellowPoints:;
- (void)updateYellowPoints:;
- (void)saveYellowPointsToStorag;
- (id)localYellowDotInfoForType:;
- (void)updateTypeInfo:forType:;
- (id)localStorageKey;
- (BOOL)hasYellowDotForType:;
- (BOOL)hasTabMeYellowDot;
- (BOOL)hasProfileMoreYellowDot;
- (BOOL)hasSliderInsightsYellowDot;
- (id)userID;
- (void).cxx_destruct;
- (id)initWithUserModel:;
- (void)setUserID:;
@end
