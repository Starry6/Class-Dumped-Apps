@interface AWEPadKeyBoardOperation : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) @ target;
@property (nonatomic) @? clickCallback;
@property (nonatomic) @? doubleClickCallback;
@property (nonatomic) @? longPressBeginCallback;
@property (nonatomic) @? longPressEndCallback;
- (id)clickCallback;
- (void)setClickCallback:;
- (void)setDoubleClickCallback:;
- (void)setLongPressBeginCallback:;
- (void)setLongPressEndCallback:;
- (id)doubleClickCallback;
- (id)longPressBeginCallback;
- (id)longPressEndCallback;
- (id)target;
- (void)setKey:;
- (id)key;
- (void)setTarget:;
- (void).cxx_destruct;
@end
