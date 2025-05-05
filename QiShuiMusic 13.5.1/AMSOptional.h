@interface AMSOptional : NSObject
@property (nonatomic) @ value;
- (id)init;
- (void).cxx_destruct;
- (id)value;
- (id)initWithValue:;
+ (id)optionalWithValue:;
+ (id)optionalWithNil;
@end
