@interface SignpostSupportMessageArgument : NSObject
@property (nonatomic) C type;
@property (nonatomic) NSObject argumentObject;
- (id)argumentObject;
- (unsigned char)type;
- (void).cxx_destruct;
- (id)initWithArgumentObject:;
- (BOOL)isEqual:;
@end
