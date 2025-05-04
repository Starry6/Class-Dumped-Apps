@interface AWEIMGroupBlockedMemberCollectionCellModel : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) q originLeftBlockTime;
@property (nonatomic) q leftSilentBlockTime;
@property (nonatomic) q cellType;
@property (nonatomic) AWEIMUser user;
@property (nonatomic) BOOL enableBottomLine;
@property (nonatomic) BOOL useNewStyle;
- (BOOL)useNewStyle;
- (void)setUseNewStyle:;
- (void)setEnableBottomLine:;
- (BOOL)enableBottomLine;
- (void)setLeftSilentBlockTime:;
- (void)setOriginLeftBlockTime:;
- (id)initWithConversation:User:leftBlockTime:cellType:;
- (long long)leftSilentBlockTime;
- (long long)originLeftBlockTime;
- (id)user;
- (void)setUser:;
- (long long)cellType;
- (void)setCellType:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
@end
