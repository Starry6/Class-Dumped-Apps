@interface PuzzlePrefetchPBConfigModel : NSObject
@property (nonatomic) NSString channel;
@property (nonatomic) NSString pbDefineString;
@property (nonatomic) NSString pbShrinkString;
- (id)pbDefineString;
- (id)pbShrinkString;
- (void)setPbDefineString:;
- (void)setPbShrinkString:;
- (void)setChannel:;
- (id)channel;
- (void).cxx_destruct;
@end
