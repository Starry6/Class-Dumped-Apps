@interface IESLiveMultiBaseResourceManager : NSObject
@property (nonatomic) NSInteger playMode;
@property (nonatomic) NSString dressId;
@property (nonatomic) NSInteger dressType;
@property (nonatomic) HTSLiveDress dress;
@property (nonatomic) @? block;
- (id)dressId;
- (id)dress;
- (int)dressType;
- (void)fetchDress:;
- (void)fetchEffectList:completion:;
- (void)handleFetchDressResponse:status:error:;
- (void)setDidUpdateDress:;
- (void)setDress:;
- (void)setDressId:;
- (void)setDressType:;
- (void)updateDressId:dressType:;
- (id)block;
- (void).cxx_destruct;
- (void)setBlock:;
- (void)setPlayMode:;
- (int)playMode;
@end
