@interface AWEIMAccessUserModel : NSObject
@property (nonatomic) @? block;
@property (nonatomic) BOOL shouldExecuteBlockOnce;
@property (nonatomic) NSString identifier;
@property (nonatomic) BOOL loadingAnimationWanted;
@property (nonatomic) BOOL refreshedUserNeeded;
- (void)setShouldExecuteBlockOnce:;
- (void)setLoadingAnimationWanted:;
- (void)setRefreshedUserNeeded:;
- (BOOL)refreshedUserNeeded;
- (BOOL)loadingAnimationWanted;
- (BOOL)shouldExecuteBlockOnce;
- (void)setIdentifier:;
- (id)identifier;
- (id)block;
- (void)setBlock:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
@end
