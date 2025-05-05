@interface SecuritydXPCCallback : NSObject
@property (nonatomic) @? callback;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)callback;
- (void)setCallback:;
- (void).cxx_destruct;
- (id)initWithCallback:;
- (void)callCallback:error:;
@end
