@interface IESCKRoomStateContext : NSObject
@property (nonatomic) NSString roomId;
@property (nonatomic) q orientation;
@property (nonatomic) q roomType;
@property (nonatomic) q landscapeClearStatus;
@property (nonatomic) q clearStatus;
@property (nonatomic) q keyboardStatus;
- (void)setClearStatus:;
- (long long)clearStatus;
- (long long)keyboardStatus;
- (long long)landscapeClearStatus;
- (id)roomId;
- (long long)roomType;
- (void)setKeyboardStatus:;
- (void)setLandscapeClearStatus:;
- (void)setRoomId:;
- (void)setRoomType:;
- (long long)orientation;
- (void).cxx_destruct;
- (void)setOrientation:;
@end
