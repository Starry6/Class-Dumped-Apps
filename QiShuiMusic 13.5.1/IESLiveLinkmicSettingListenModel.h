@interface IESLiveLinkmicSettingListenModel : NSObject
@property (nonatomic) @ listener;
@property (nonatomic) BOOL isAllKey;
@property (nonatomic) NSSet keys;
@property (nonatomic) @? callback;
@property (nonatomic) @? onceMessageBlock;
- (BOOL)isAllKey;
- (id)onceMessageBlock;
- (void)setIsAllKey:;
- (void)setOnceMessageBlock:;
- (id)callback;
- (void)setCallback:;
- (id)keys;
- (id)listener;
- (void)setKeys:;
- (void).cxx_destruct;
- (void)setListener:;
@end
