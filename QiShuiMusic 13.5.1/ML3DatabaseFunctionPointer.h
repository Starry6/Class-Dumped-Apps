@interface ML3DatabaseFunctionPointer : ML3DatabaseFunction
@property (nonatomic) ^? functionPointer;
@property (nonatomic) ^v userData;
- (void)setFunctionPointer:;
- (BOOL)registerWithConnection:;
- (void)setUserData:;
- (id)userData;
- (id)functionPointer;
@end
