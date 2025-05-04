@interface AWESearchScrollSessionRecord : NSObject
@property (nonatomic) NSString sceneIdentifier;
@property (nonatomic) NSString fakeScene;
@property (nonatomic) double beginTS;
@property (nonatomic) double endTS;
@property (nonatomic) NSDictionary hitchRanges;
- (void)setBeginTS:;
- (double)beginTS;
- (double)endTS;
- (void)setEndTS:;
- (void)setHitchRanges:;
- (id)hitchRanges;
- (id)fakeScene;
- (void)setFakeScene:;
- (void)begin;
- (id)init;
- (void)end;
- (void)setSceneIdentifier:;
- (id)sceneIdentifier;
- (void).cxx_destruct;
@end
