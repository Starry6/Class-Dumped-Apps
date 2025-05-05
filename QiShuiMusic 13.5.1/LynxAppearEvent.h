@interface LynxAppearEvent : LynxDetailEvent
@property (nonatomic) BOOL valid;
- (id)initWithName:targetSign:detail:;
- (BOOL)valid;
- (void)setValid:;
@end
