@interface BDXPrefetchWebConfigLoader : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithSchema:config:completion:;
- (void)transferData:schema:resFrom:beginTime:completion:;
@end
