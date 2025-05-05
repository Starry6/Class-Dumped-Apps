@interface MTPAFEventHandlers : MTEventHandlers
@property (nonatomic) MTMediaActivityEventHandler playStart;
@property (nonatomic) MTMediaActivityEventHandler playStop;
@property (nonatomic) MTMediaActivityEventHandler seekStart;
@property (nonatomic) MTMediaActivityEventHandler seekStop;
- (id)playStop;
- (id)playStart;
- (id)seekStop;
- (void)registerDefaultEventHandlers;
- (Class)baseDataProviderClass;
- (id)seekStart;
@end
