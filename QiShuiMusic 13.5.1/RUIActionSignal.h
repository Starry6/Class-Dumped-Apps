@interface RUIActionSignal : NSObject
@property (nonatomic) Q topSignal;
@property (nonatomic) NSMutableArray subActions;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (unsigned long long)topSignal;
- (void)setTopSignal:;
- (id)subActions;
- (void)setSubActions:;
+ (id)signalWithType:;
+ (id)signalWithString:;
+ (id)stringForActionSignal:;
+ (unsigned long long)signalTypeForString:;
@end
