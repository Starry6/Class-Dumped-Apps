@interface BDRECommand : NSObject
- (void)execute:withEnv:error:;
- (id)instruction;
+ (id)instructionJsonArrayWithCommands:;
@end
