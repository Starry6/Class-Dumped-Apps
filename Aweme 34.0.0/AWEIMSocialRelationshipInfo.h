@interface AWEIMSocialRelationshipInfo : NSObject
@property (nonatomic) BOOL isGroupChat;
@property (nonatomic) BOOL isMutual;
@property (nonatomic) double startTime;
@property (nonatomic) double continueDays;
- (void)setContinueDays:;
- (void)setIsMutual:;
- (BOOL)isMutual;
- (double)continueDays;
- (void)setStartTime:;
- (double)startTime;
- (BOOL)isGroupChat;
- (void)setIsGroupChat:;
@end
