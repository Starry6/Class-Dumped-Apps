@interface MDLPathAssetResolver : NSObject
@property (nonatomic) NSString path;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)path;
- (void)setPath:;
- (void).cxx_destruct;
- (id)initWithPath:;
- (BOOL)canResolveAssetNamed:;
- (id)resolveAssetNamed:;
@end
