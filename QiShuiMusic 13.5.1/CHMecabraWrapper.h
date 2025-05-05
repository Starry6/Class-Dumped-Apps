@interface CHMecabraWrapper : NSObject
@property (nonatomic) ^{__Mecabra=} mecabra;
- (id)init;
- (void)dealloc;
- (void)initMecabraIfNeededWithType:learningDictURL:;
- (id)mecabra;
@end
