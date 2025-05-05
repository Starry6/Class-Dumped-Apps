@interface SWDeclareSystemActivityResult : NSObject
@property (nonatomic) NSInteger returnValue;
@property (nonatomic) I assertionID;
@property (nonatomic) NSInteger systemState;
- (int)systemState;
- (int)returnValue;
- (id)description;
- (unsigned int)assertionID;
- (id)initWithReturnValue:assertionID:systemState:;
@end
