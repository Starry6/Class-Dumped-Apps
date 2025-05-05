@interface IESLiveInteractiveSearchAPI : HTSLiveApi
@property (nonatomic) NSNumber roomId;
- (id)initWithRoomId:;
- (void)getSearchResult:page:completion:;
- (id)roomId;
- (void)setRoomId:;
- (void).cxx_destruct;
@end
