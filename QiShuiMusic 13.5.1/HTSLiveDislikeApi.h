@interface HTSLiveDislikeApi : HTSLiveApi
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
- (void)dislikeAdRoomWithEnterFrom:enterMethod:creativeID:adID:logExtra:enterTag:baseUrl:path:dislikeAdType:complection:;
- (void)dislikeAdRoomWithEnterFrom:enterMethod:creativeID:adID:logExtra:enterTag:baseUrl:path:dislikeAdType:dislikeAdList:reason:complection:;
- (void)dislikeAdRoomWithEnterFrom:enterMethod:creativeID:adID:logExtra:enterTag:baseUrl:path:dislikeAdType:reason:complection:;
- (void)dislikeAdRoomWithEnterFrom:enterMethod:creativeID:adID:logExtra:enterTag:complection:;
- (void)dislikeAdRoomWithEnterFrom:enterMethod:creativeID:adID:logExtra:enterTag:reason:complection:;
- (void)dislikeRoomWithEnterFrom:enterMethod:complection:;
- (void)dislikeRoomWithEnterFrom:enterMethod:multiReason:complection:;
- (void)dislikeRoomWithEnterFrom:enterMethod:reason:complection:;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
- (id)initWithRoom:;
@end
