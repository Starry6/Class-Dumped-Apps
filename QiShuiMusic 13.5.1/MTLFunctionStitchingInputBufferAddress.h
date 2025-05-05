@interface MTLFunctionStitchingInputBufferAddress : NSObject
@property (nonatomic) Q byteOffset;
@property (nonatomic) BOOL dereference;
@property (nonatomic) Q bindIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDereference:;
- (unsigned long long)bindIndex;
- (id)initWithBindIndex:byteOffset:dereference:;
- (void)setByteOffset:;
- (unsigned long long)byteOffset;
- (unsigned long long)hash;
- (id)initWithBindIndex:;
- (void)setBindIndex:;
- (BOOL)dereference;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
