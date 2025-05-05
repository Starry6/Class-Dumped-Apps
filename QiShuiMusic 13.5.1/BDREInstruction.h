@interface BDREInstruction : NSObject
@property (nonatomic) I instruction;
@property (nonatomic) @ value;
- (id)initWithInstruction:value:;
- (id)jsonFormat;
- (id)initWithDictionary:;
- (id)command;
- (void)setValue:;
- (void).cxx_destruct;
- (id)value;
- (unsigned int)instruction;
- (void)setInstruction:;
+ (id)commandsWithJsonArray:;
@end
