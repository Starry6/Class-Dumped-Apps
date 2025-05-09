@interface AWEVoipInfo : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString callerID;
@property (nonatomic) BOOL isCaller;
@property (nonatomic) NSString conversationID;
@property (nonatomic) NSSet participatorIDs;
@property (nonatomic) BOOL firstFrameArrived;
@property (nonatomic) NSDictionary extraInfo;
@property (nonatomic) BOOL isVoipCallType1V1;
@property (nonatomic) BOOL isMultipleCalls;
@property (nonatomic) BOOL isAudio;
@property (nonatomic) Q voipType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)voipType;
- (id)initWithVoip:;
- (BOOL)firstFrameArrived;
- (id)participatorIDs;
- (BOOL)isMultipleCalls;
- (void)setIsMultipleCalls:;
- (void)setVoipType:;
- (void)setParticipatorIDs:;
- (void)setFirstFrameArrived:;
- (BOOL)isVoipCallType1V1;
- (void)setIsVoipCallType1V1:;
- (void)setIsAudio:;
- (id)callerID;
- (void)setCallerID:;
- (void)setIdentifier:;
- (id)identifier;
- (id)conversationID;
- (void).cxx_destruct;
- (void)setConversationID:;
- (BOOL)isAudio;
- (id)extraInfo;
- (BOOL)isCaller;
- (void)setIsCaller:;
- (void)setExtraInfo:;
@end
