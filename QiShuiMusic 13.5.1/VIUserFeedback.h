@interface VIUserFeedback : NSObject
@property (nonatomic) <VIImageContent> image;
@property (nonatomic) NSData userFeedbackPayload;
@property (nonatomic) NSString reportIdentifier;
- (void).cxx_destruct;
- (id)image;
- (id)copyWithZone:;
- (id)initWithImage:payload:reportIdentifier:;
- (id)reportIdentifier;
- (id)userFeedbackPayload;
@end
