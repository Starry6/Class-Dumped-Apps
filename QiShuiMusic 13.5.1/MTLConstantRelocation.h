@interface MTLConstantRelocation : NSObject
@property (nonatomic) NSObject<OS_dispatch_data> data;
@property (nonatomic) NSString symbolName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)symbolName;
- (void)dealloc;
- (id)data;
- (id)initWithSymbolName:data:;
- (id)initWithSymbolName:bytes:length:;
@end
