@interface IESLiveFrequentCommentApi : HTSLiveApi
@property (nonatomic) <IESLiveRoomServiceAdapter> roomModel;
- (void)addFrequentCommentWithContent:completion:;
- (void)deleteFrequentCommentWithContentID:callback:;
- (void)fetchFrequentCommentsCompletion:;
- (void)fetchRecommendContentsCompletion:;
- (id)initWithRoomModel:;
- (id)roomModel;
- (void)setRoomModel:;
- (void)sortFrequentCommentWithOrder:callback:;
- (void)updateFrequentCommentWithContentID:content:callback:;
- (void).cxx_destruct;
@end
