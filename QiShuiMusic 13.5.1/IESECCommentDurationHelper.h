@interface IESECCommentDurationHelper : NSObject
@property (nonatomic) double interactionStartTime;
@property (nonatomic) double interactionReqStartTime;
@property (nonatomic) double interactionReqEndTime;
@property (nonatomic) NSString interactionType;
@property (nonatomic) NSString interactionContent;
- (id)interactionContent;
- (double)interactionReqEndTime;
- (double)interactionReqStartTime;
- (double)interactionStartTime;
- (void)setInteractionContent:;
- (void)setInteractionReqEndTime:;
- (void)setInteractionReqStartTime:;
- (void)setInteractionStartTime:;
- (id)interactionType;
- (void)clear;
- (void).cxx_destruct;
- (void)setInteractionType:;
@end
