@interface AWEGrouponSubPageUndertakeManager : NSObject
@property (nonatomic) BOOL isSubPageUndertake;
@property (nonatomic) NSMutableSet subPageIDSet;
@property (nonatomic) NSString sessionID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)shouldPauseNearbyVideoWithID:pause:;
- (void)updateIsSubPageUndertake:;
- (BOOL)isSubPageUndertake;
- (id)subPageIDSet;
- (void)setIsSubPageUndertake:;
- (void)resetSubPageSet;
- (void)updateSubPageSet:;
- (void)removeSubPageID:;
- (void)resetAllSubPageStates;
- (BOOL)isNearbySubPageUndertake;
- (void)setSubPageIDSet:;
- (void)setSessionID:;
- (id)init;
- (id)sessionID;
- (void).cxx_destruct;
+ (void)pauseNearbyVideoWithID:pause:;
@end
