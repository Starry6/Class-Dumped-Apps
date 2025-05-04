@interface AWELucyLiveIMMessageActionCreator : IESLiveIMBaseActionCreator
@property (nonatomic) q referenceCount;
- (void)setupWithMessageConfig:;
- (void)setupWithRoomID:;
- (long long)referenceCount;
- (void)setReferenceCount:;
@end
