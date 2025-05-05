@interface IESLiveInteractiveFastMatchParams : NSObject
@property (nonatomic) q roomID;
@property (nonatomic) NSString anchorID;
@property (nonatomic) BOOL isManual;
@property (nonatomic) BOOL reMatch;
@property (nonatomic) q matchType;
@property (nonatomic) q matchScene;
@property (nonatomic) NSInteger cityCode;
- (BOOL)reMatch;
- (id)anchorID;
- (long long)matchScene;
- (void)setAnchorID:;
- (void)setIsManual:;
- (void)setMatchScene:;
- (void)setReMatch:;
- (void).cxx_destruct;
- (long long)matchType;
- (BOOL)isManual;
- (int)cityCode;
- (void)setCityCode:;
- (long long)roomID;
- (void)setRoomID:;
- (void)setMatchType:;
@end
