@interface LynxTextIndent : NSObject
@property (nonatomic) q type;
@property (nonatomic) double value;
- (double)applyValue:;
- (void)setType:;
- (void)setValue:;
- (long long)type;
- (double)value;
- (id)initWithValue:;
@end
