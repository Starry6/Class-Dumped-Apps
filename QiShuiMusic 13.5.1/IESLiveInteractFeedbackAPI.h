@interface IESLiveInteractFeedbackAPI : HTSLiveApi
@property (nonatomic) <IESLiveRoomServiceAdapter> roomModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)apiRequestByPath:callback:;
- (void)fetchFeedbackCategoriesAtScene:extraParams:callback:;
- (void)fetchPlaymodeFeedbackCategoriesAtScene:playMode:extraParams:callback:;
- (id)roomModel;
- (void)setRoomModel:;
- (void)uploadFeedbackWithParams:completion:;
- (void).cxx_destruct;
- (id)initWithRoom:;
@end
