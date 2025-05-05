@interface IESLiveInteractionBoolSetting : NSObject
@property (nonatomic) NSInteger key;
@property (nonatomic) BOOL value;
- (id)initWithPBKey:value:;
- (int)key;
- (BOOL)value;
@end
