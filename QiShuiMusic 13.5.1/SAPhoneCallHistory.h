@interface SAPhoneCallHistory : SAPhoneCallSearchResult
@property (nonatomic) NSNumber blocked;
@property (nonatomic) NSNumber callCount;
@property (nonatomic) NSNumber faceTime;
@property (nonatomic) NSNumber faceTimeAudio;
@property (nonatomic) NSNumber missed;
@property (nonatomic) NSNumber outgoing;
- (id)groupIdentifier;
- (void)setCallCount:;
- (id)encodedClassName;
- (id)callCount;
- (id)blocked;
- (void)setBlocked:;
- (void)setOutgoing:;
- (id)outgoing;
- (id)faceTime;
- (void)setFaceTime:;
- (id)faceTimeAudio;
- (void)setFaceTimeAudio:;
- (id)missed;
- (void)setMissed:;
+ (id)callHistory;
+ (id)callHistoryWithDictionary:context:;
@end
