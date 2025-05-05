@interface ISCompositorResourceProviderKey : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) Q flags;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setName:;
- (void).cxx_destruct;
- (id)name;
- (void)setFlags:;
- (unsigned long long)flags;
+ (id)resourceKeyWithName:flags:;
@end
