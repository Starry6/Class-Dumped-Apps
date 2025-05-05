@interface UITextInputArrowKeyHistory : NSObject
@property (nonatomic) UITextPosition startPosition;
@property (nonatomic) NSInteger anchor;
@property (nonatomic) UITextPosition start;
@property (nonatomic) UITextPosition end;
@property (nonatomic) UITextPosition cursor;
@property (nonatomic) BOOL affinityDownstream;
@property (nonatomic) q amount;
- (void)setEnd:;
- (int)anchor;
- (void)setStart:;
- (id)cursor;
- (id)end;
- (id)start;
- (void)setCursor:;
- (void)setAnchor:;
- (void).cxx_destruct;
- (id)startPosition;
- (void)setStartPosition:;
- (BOOL)affinityDownstream;
- (void)setAffinityDownstream:;
- (long long)amount;
- (void)setAmount:;
@end
