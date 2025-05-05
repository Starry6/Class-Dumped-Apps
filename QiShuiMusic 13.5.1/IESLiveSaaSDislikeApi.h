@interface IESLiveSaaSDislikeApi : HTSLiveApi
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
- (void)dislikeAdRoomWithEnterFrom:enterMethod:creativeID:adID:logExtra:enterTag:positionType:completion:;
- (void)dislikeRoomWithEnterFrom:enterMethod:positionType:completion:;
- (void)dislikeRoomWithEnterFrom:enterMethod:requestID:anchorID:roomID:positionType:completion:;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
- (id)initWithRoom:;
@end
