@interface IESMMBingoBeats : NSObject
@property (nonatomic) NSString veBeatsPath;
@property (nonatomic) NSString downBeatsPath;
@property (nonatomic) NSString noStengthPath;
@property (nonatomic) NSString sequentialPath;
@property (nonatomic) NSInteger mode;
@property (nonatomic) NSInteger type;
- (void)setVeBeatsPath:;
- (id)downBeatsPath;
- (id)noStengthPath;
- (id)sequentialPath;
- (void)setDownBeatsPath:;
- (void)setNoStengthPath:;
- (void)setSequentialPath:;
- (id)veBeatsPath;
- (id)init;
- (void)setType:;
- (int)type;
- (void).cxx_destruct;
- (int)mode;
- (void)setMode:;
@end
