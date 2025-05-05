@interface MTLMessage : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSString string;
- (id)string;
- (void)dealloc;
- (unsigned long long)type;
- (id)init:message:;
@end
