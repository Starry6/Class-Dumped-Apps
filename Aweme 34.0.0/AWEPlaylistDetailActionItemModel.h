@interface AWEPlaylistDetailActionItemModel : NSObject
@property (nonatomic) @? cellTappedBlock;
@property (nonatomic) Q type;
@property (nonatomic) NSString content;
@property (nonatomic) BOOL enable;
- (void)setCellTappedBlock:;
- (id)cellTappedBlock;
- (id)initWithType:cellTappedBlock:;
- (BOOL)enable;
- (id)content;
- (unsigned long long)type;
- (void)setContent:;
- (void)setType:;
- (void).cxx_destruct;
- (void)setEnable:;
@end
