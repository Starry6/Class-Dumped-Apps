@interface DNDAuxiliaryStateService : NSObject
- (id)_initWithClientIdentifier:;
- (void).cxx_destruct;
- (BOOL)setScreenIsShared:screenIsMirrored:error:;
+ (id)serviceForClientIdentifier:;
@end
