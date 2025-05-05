@interface TUConversationParticipantPresentationContext : NSObject
@property (nonatomic) Q participantIdentifier;
@property (nonatomic) Q videoQuality;
@property (nonatomic) NSNumber visibility;
@property (nonatomic) NSNumber prominence;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} spatialPosition;
@property (nonatomic) BOOL isInCanvas;
- (id)prominence;
- (id)visibility;
- (unsigned long long)participantIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (unsigned long long)videoQuality;
- (id)spatialPosition;
- (BOOL)isInCanvas;
- (id)initWithParticipantIdentifier:videoQuality:visibility:prominence:spatialPosition:isInCanvas:;
+ (BOOL)supportsSecureCoding;
@end
