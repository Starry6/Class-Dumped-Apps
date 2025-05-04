@interface AWECommentAICloneRequestModel : NSObject
@property (nonatomic) NSString awemeID;
@property (nonatomic) NSString channelID;
@property (nonatomic) BOOL expectState;
- (void)setAwemeID:;
- (id)awemeID;
- (void)setExpectState:;
- (BOOL)expectState;
- (id)requestParamsDict;
- (void)setChannelID:;
- (id)channelID;
- (void).cxx_destruct;
@end
