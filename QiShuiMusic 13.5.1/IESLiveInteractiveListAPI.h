@interface IESLiveInteractiveListAPI : HTSLiveApi
@property (nonatomic) NSNumber roomID;
@property (nonatomic) NSNumber anchorID;
- (id)anchorID;
- (void)getActiveListV2WithSource:completion:;
- (void)getActiveListV2WithSource:extra:completion:;
- (id)initWithRoomID:anchorID:;
- (void)setAnchorID:;
- (void).cxx_destruct;
- (id)roomID;
- (void)setRoomID:;
@end
