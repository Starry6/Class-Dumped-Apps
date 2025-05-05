@interface MTLBufferRelocation : NSObject
@property (nonatomic) <MTLBuffer> buffer;
@property (nonatomic) Q offset;
@property (nonatomic) NSString symbolName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)symbolName;
- (void)dealloc;
- (id)buffer;
- (unsigned long long)offset;
- (id)initWithSymbolName:buffer:offset:;
@end
