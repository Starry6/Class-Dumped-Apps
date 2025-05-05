@interface IESLiveSpecialCharacterSet : NSObject
@property (nonatomic) NSCharacterSet specialSet;
- (id)setupSpecialSet;
- (id)filterSpecialAndNewlineCharacter:;
- (id)filterSpecialCharacter:;
- (id)filterSpecialCharacter:anotherCharacterSet:bySymbol:;
- (id)filterSpecialCharacter:bySymbol:;
- (void)setSpecialSet:;
- (id)specialSet;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)sharedInstance;
@end
