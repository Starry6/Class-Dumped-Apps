@interface ICSUnfoldingStream : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (char)read;
- (void).cxx_destruct;
- (id)initWithInputStream:;
- (BOOL)eos;
- (void)_readTwo;
- (void)_shiftRead;
@end
