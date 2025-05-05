@interface IESECABTestExperimentRegisterModel : NSObject
@property (nonatomic) NSValue registerFuncPointer;
@property (nonatomic) BOOL hasRegistered;
- (BOOL)hasRegistered;
- (id)registerFuncPointer;
- (void)setHasRegistered:;
- (void)setRegisterFuncPointer:;
- (void).cxx_destruct;
@end
