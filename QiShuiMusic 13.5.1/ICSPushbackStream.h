@interface ICSPushbackStream : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (BOOL)pushBack:;
- (char)peek;
- (char)read;
- (void).cxx_destruct;
- (id)initWithInputStream:;
- (BOOL)eos;
@end
