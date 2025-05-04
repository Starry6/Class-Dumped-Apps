@interface AWEAwemeDetailContainerInsertAwemeConfig : NSObject
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) q insertIndex;
@property (nonatomic) BOOL shouldForceReload;
@property (nonatomic) NSString bizType;
@property (nonatomic) @? insertDataBlock;
@property (nonatomic) @? insertCompleteBlock;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)setInsertIndex:;
- (long long)insertIndex;
- (id)bizType;
- (void)setBizType:;
- (BOOL)shouldForceReload;
- (void)setShouldForceReload:;
- (id)insertDataBlock;
- (void)setInsertDataBlock:;
- (id)insertCompleteBlock;
- (void)setInsertCompleteBlock:;
- (void).cxx_destruct;
@end
