@interface HTSLiveMessageListNodeAction : NSObject
@property (nonatomic) HTSLiveTextPiece piece;
@property (nonatomic) {_NSRange=QQ} clickRange;
@property (nonatomic) @? tapAction;
- (id)clickRange;
- (id)piece;
- (void)setClickRange:;
- (void)setPiece:;
- (void).cxx_destruct;
- (id)tapAction;
- (void)setTapAction:;
@end
